# actuator_control.py

import rclpy
from rclpy.node import Node
from ucb_interface.msg import Actuador



try:
    import Jetson.GPIO as GPIO
    JETSON_HARDWARE = True
except (ImportError, RuntimeError):
    print("[WARN] Jetson.GPIO no disponible. Usando modo simulado.")
    JETSON_HARDWARE = False

if not JETSON_HARDWARE:
    class GPIO:
        BOARD = 'BOARD'
        OUT = 'OUT'
        HIGH = 'HIGH'
        LOW = 'LOW'
        @staticmethod
        def setmode(mode): print(f"[SIM] GPIO.setmode({mode})")
        @staticmethod
        def setup(pin, mode): print(f"[SIM] GPIO.setup(pin={pin}, mode={mode})")
        @staticmethod
        def output(pin, value): print(f"[SIM] GPIO.output(pin={pin}, value={value})")
        @staticmethod
        def cleanup(): print("[SIM] GPIO.cleanup()")

# Pines del L298N
IN1 = 9
IN2 = 10

# Pines para relevadores
RELAY_RIGHT_TURN = 2
RELAY_LEFT_TURN  = 3
RELAY_REV1       = 4
RELAY_REV2       = 5
RELAY_CHARGE     = 6

# Pulsos para 0° a 180°
pos0 = 102
pos180 = 537

def setServoAngle(servoNum, angle):
    if angle < 0:
        angle = 0
    if angle > 180:
        angle = 180
    pulse = int(pos0 + (pos180 - pos0) * (angle / 180.0))
    print(f"[SIM] Servo {servoNum} a {angle}° -> pulso {pulse}")
    #  librería servos

class ActuatorController(Node):
    def __init__(self):
        super().__init__('actuator_controller')
        self.subscription = self.create_subscription(Actuador, '/actuator_command', self.actuator_callback, 10)

        GPIO.setmode(GPIO.BOARD)
        for pin in [IN1, IN2, RELAY_RIGHT_TURN, RELAY_LEFT_TURN, RELAY_REV1, RELAY_REV2, RELAY_CHARGE]:
            GPIO.setup(pin, GPIO.OUT)
            GPIO.output(pin, GPIO.LOW)

        self.get_logger().info(" actuator_controller listo")

    def actuator_callback(self, msg):
        input_str = msg.command.strip()

        # Comandos de motor DC
        if input_str == "f":
            GPIO.output(IN1, GPIO.HIGH)
            GPIO.output(IN2, GPIO.LOW)
            self.get_logger().info("Motor adelante")

        elif input_str == "r":
            GPIO.output(IN1, GPIO.LOW)
            GPIO.output(IN2, GPIO.HIGH)
            self.get_logger().info("Motor reversa")

        elif input_str == "s":
            GPIO.output(IN1, GPIO.LOW)
            GPIO.output(IN2, GPIO.LOW)
            self.get_logger().info("Motor detenido")

        # Comandos de relés
        elif input_str == "dr on":
            GPIO.output(RELAY_RIGHT_TURN, GPIO.HIGH)
            self.get_logger().info("Guiñador derecho encendido")

        elif input_str == "dr off":
            GPIO.output(RELAY_RIGHT_TURN, GPIO.LOW)
            self.get_logger().info("Guiñador derecho apagado")

        elif input_str == "iz on":
            GPIO.output(RELAY_LEFT_TURN, GPIO.HIGH)
            self.get_logger().info("Guiñador izquierdo encendido")

        elif input_str == "iz off":
            GPIO.output(RELAY_LEFT_TURN, GPIO.LOW)
            self.get_logger().info("Guiñador izquierdo apagado")

        elif input_str == "rev1 on":
            GPIO.output(RELAY_REV1, GPIO.HIGH)
            self.get_logger().info("Reversa motor 1 activada")

        elif input_str == "rev1 off":
            GPIO.output(RELAY_REV1, GPIO.LOW)
            self.get_logger().info("Reversa motor 1 desactivada")

        elif input_str == "rev2 on":
            GPIO.output(RELAY_REV2, GPIO.HIGH)
            self.get_logger().info("Reversa motor 2 activada")

        elif input_str == "rev2 off":
            GPIO.output(RELAY_REV2, GPIO.LOW)
            self.get_logger().info("Reversa motor 2 desactivada")

        elif input_str == "charge on":
            GPIO.output(RELAY_CHARGE, GPIO.HIGH)
            self.get_logger().info("Carga autónoma activada")

        elif input_str == "charge off":
            GPIO.output(RELAY_CHARGE, GPIO.LOW)
            self.get_logger().info("Carga autónoma desactivada")

        # Comando de servo
        else:
            try:
                servo_str, angle_str = input_str.split()
                servo_num = int(servo_str)
                angle = int(angle_str)
                if 0 <= servo_num <= 15 and 0 <= angle <= 180:
                    setServoAngle(servo_num, angle)
                    self.get_logger().info(f"Servo {servo_num} movido a {angle}°")
                else:
                    self.get_logger().error("Error: Servo (0–15) o ángulo (0–180) fuera de rango.")
            except Exception:
                self.get_logger().warn("Entrada no válida. Ejemplo: 1 90")

def main(args=None):
    rclpy.init(args=args)
    node = ActuatorController()
    try:
        rclpy.spin(node)
    finally:
        GPIO.cleanup()
        node.destroy_node()
        rclpy.shutdown()
