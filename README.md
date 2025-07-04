cd nexus_ws

terminal 1 
en la primera ejecucion limpiar usando 
rm -rf build/ install/ log/

colcon build
source install/setup.bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml


terminal 2
en la primera ejecucion limpiar usando 
rm -rf build/ install/ log/

colcon build
source install/setup.bash
ros2 launch code_py ejecutar.launch.py


Running on http://127.0.0.1:5000
