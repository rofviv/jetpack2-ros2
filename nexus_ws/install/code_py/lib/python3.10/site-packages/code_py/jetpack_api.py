# import logging
# log = logging.getLogger('werkzeug')
# log.setLevel(logging.ERROR)


from flask import Flask, render_template
from flask_socketio import SocketIO
import time
import threading

# imports
import rclpy
from rclpy.node import Node
from ucb_interface.msg import Motor, Actuador

# FLASK SETUP
app = Flask(__name__)
socketio = SocketIO(app, cors_allowed_origins='*')

# variables
default_speed = 80
default_factorA = 1.00
default_factorB = 1.00
ip_local = "127.0.0.1"



rclpy.init()

class ROSNode(Node):
    def __init__(self):
        super().__init__('jetpack_node')
        self.motor_pub = self.create_publisher(Motor, '/motor_command', 10)
        self.actuator_pub = self.create_publisher(Actuador, '/actuator_command', 10)

ros_node = ROSNode()

# variables
last_command_time = 0
command_lock = threading.Lock()
current_motion = None
COMMAND_TIMEOUT = 0.5  # segundos


def enviar_comando(velocidad_izq, velocidad_der):
    comando = f"M{velocidad_izq}-{factorA:.2f},{velocidad_der}-{factorB:.2f}"

    # Publicar ---------------
    msg = Motor()
    msg.pwm_left = float(velocidad_izq)
    msg.pwm_right = float(velocidad_der)
    msg.factor_left = float(factorA)
    msg.factor_right = float(factorB)
    ros_node.motor_pub.publish(msg)
    
    print("[SIMULACIÓN] Comando motores:", comando)


def watchdog_loop():
    global last_command_time, current_motion
    while True:
        time.sleep(0.1)
        with command_lock:
            if current_motion is not None and (time.time() - last_command_time > COMMAND_TIMEOUT):
                enviar_comando(0, 0)
                current_motion = None
                print("[INFO] Motores detenidos por inactividad")

threading.Thread(target=watchdog_loop, daemon=True).start()

# SOCKETIO RECIBID
@socketio.on('movimiento')
def on_movimiento(data):
    global last_command_time, current_motion, factorA, factorB

    keys = data.get('keys', [])
    speedA = int(data.get('speedA', default_speed))
    speedB = int(data.get('speedB', default_speed))
    factorA = default_factorA
    factorB = default_factorB

    velocidad_izq = speedA if 'W' in keys else 0
    velocidad_der = speedB if 'E' in keys else 0

    nuevo_motion = (velocidad_izq, velocidad_der, factorA, factorB)

    with command_lock:
        last_command_time = time.time()
        if current_motion != nuevo_motion:
            enviar_comando(velocidad_izq, velocidad_der)
            current_motion = nuevo_motion




@socketio.on('actuators')
def on_actuators(data):
    key = data.get('key', '')
    value = data.get('value', '')

    # "f", "r", "s"
    if isinstance(key, str) and key.strip() in ['f', 'r', 's']:
        command = key.strip()
    # number
    elif isinstance(key, int):
        try:
            angle = int(value)
            if 0 <= key <= 15 and 0 <= angle <= 180:
                command = f"{key} {angle}"
            else:
                print("[SIMULACIÓN] Valor fuera de rango (servo 0-15, ángulo 0-180)")
                return
        except ValueError:
            print("[SIMULACIÓN] Valor inválido para ángulo")
            return
    # string
    else:
        command = f"{key.strip()} {value.strip()}" if value else key.strip()

    # Publicar 
    msg = Actuador()
    msg.command = command
    ros_node.actuator_pub.publish(msg)

    print("[SIMULACIÓN] Comando actuador:", command)



# HTML 
@app.route('/')
def index():
    return render_template('index.html', ip_local=ip_local)

# 
import atexit
atexit.register(rclpy.shutdown)


def main():
    socketio.run(app, host='0.0.0.0', port=5000, allow_unsafe_werkzeug=True)

if __name__ == '__main__':
    main()