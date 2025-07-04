import rclpy
from rclpy.node import Node
from ucb_interface.msg import Motor

# Pines 
THR_A_PIN = 5
THR_B_PIN = 6
PWM_MIN = 0
PWM_MAX = 255
RAMP_MS = 4

# Variables 
factorCompensacionA = 1.0
factorCompensacionB = 1.0
velA = 0
velB = 0
linea = ""

# Jetson , simulado
try:
    import Jetson.GPIO as GPIO
    JETSON = True
except (ImportError, RuntimeError):
    print("[SIM] GPIO simulado activado")
    JETSON = False
    class GPIO:
        BOARD = 'BOARD'
        OUT = 'OUT'
        @staticmethod
        def setmode(mode): print(f"[SIM] GPIO.setmode({mode})")
        @staticmethod
        def setup(pin, mode): print(f"[SIM] GPIO.setup({pin}, {mode})")
        @staticmethod
        def PWM(pin, freq):
            class PWM:
                def start(self, d=0): print(f"[SIM] PWM {pin} start({d})")
                def ChangeDutyCycle(self, d): print(f"[SIM] PWM {pin} duty -> {d:.1f}%")
                def stop(self): print(f"[SIM] PWM {pin} stop")
            return PWM()
        @staticmethod
        def cleanup(): print("[SIM] GPIO.cleanup()")





class MotorController(Node):
    def __init__(self):
        super().__init__('motor_controller')
        self.subscription = self.create_subscription(Motor, '/motor_command', self.motor_callback, 10)

        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(THR_A_PIN, GPIO.OUT)
        GPIO.setup(THR_B_PIN, GPIO.OUT)
        self.pwmA = GPIO.PWM(THR_A_PIN, 1000)  # frecuency
        self.pwmB = GPIO.PWM(THR_B_PIN, 1000)
        self.pwmA.start(0)
        self.pwmB.start(0)

        self.get_logger().info("Control de motores con rampas sincronizadas:")
        self.get_logger().info("Formato M<velA>-<factorA>,<velB>-<factorB>")
        self.get_logger().info("Ejemplo: M100-1,100-1")
        self.get_logger().info("0 para detener motores")

    def rampaParalela(self, actualA, destinoA, actualB, destinoB, factorA, factorB):
        global velA, velB
        velA = max(PWM_MIN, min(PWM_MAX, destinoA))
        velB = max(PWM_MIN, min(PWM_MAX, destinoB))

        pwmA = max(0, min(255, velA * factorA))
        pwmB = max(0, min(255, velB * factorB))

        self.pwmA.ChangeDutyCycle(pwmA / 2.55)
        self.pwmB.ChangeDutyCycle(pwmB / 2.55)

    def motor_callback(self, msg):
        global factorCompensacionA, factorCompensacionB, velA, velB, linea

        # 
        linea = f"M{msg.pwm_left}-{msg.factor_left},{msg.pwm_right}-{msg.factor_right}".strip()

        if linea == "0":
            self.rampaParalela(velA, 0, velB, 0, factorCompensacionA, factorCompensacionB)
            self.get_logger().info("Motores detenidos")

        elif linea.startswith("M"):
            comaIndex = linea.find(',')
            if comaIndex > 1:
                parteA = linea[1:comaIndex]
                parteB = linea[comaIndex + 1:]

                guionA = parteA.find('-')
                guionB = parteB.find('-')

                if guionA > 0 and guionB > 0:
                    valorA = parteA[:guionA]
                    factorA = parteA[guionA + 1:]
                    valorB = parteB[:guionB]
                    factorB = parteB[guionB + 1:]



                    velocidadA = max(PWM_MIN, min(PWM_MAX, int(float(valorA))))
                    velocidadB = max(PWM_MIN, min(PWM_MAX, int(float(valorB))))



                    factorCompensacionA = float(factorA)
                    factorCompensacionB = float(factorB)

                    self.get_logger().info(f"Recibido -> A: {velocidadA} (factor {factorCompensacionA}), B: {velocidadB} (factor {factorCompensacionB})")

                    self.rampaParalela(velA, velocidadA, velB, velocidadB, factorCompensacionA, factorCompensacionB)

                else:
                    self.get_logger().error("Formato incorrecto. Debe ser M<velA>-<factorA>,<velB>-<factorB>")
            else:
                self.get_logger().error("Formato incorrecto en comando M")

        self.get_logger().info(f"Estado actual - A: {velA} (factor {factorCompensacionA}), B: {velB} (factor {factorCompensacionB})")


def main():
    rclpy.init()
    node = MotorController()
    try:
        rclpy.spin(node)
    finally:
        node.pwmA.stop()
        node.pwmB.stop()
        GPIO.cleanup()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
