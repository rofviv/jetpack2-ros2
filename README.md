cd nexus_ws

colcon build
source install/setup.bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
ros2 launch code_py ejecutar.launch.py

Running on http://127.0.0.1:5000
