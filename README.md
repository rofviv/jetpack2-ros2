# Jetpack ROS 2 Interface

## DIRECTORIO DONDE EJECUTAR LOS COMANDOS

```bash
cd nexus_ws
```

---

##  TERMINAL 1 – rosbridge_server

###  First-time use : rm -rf build/ install/ log/

```bash
rm -rf build/ install/ log/
colcon build
source install/setup.bash
```

###  Launch server

```bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
```

---

##  TERMINAL 2 

###   First-time use : rm -rf build/ install/ log/

```bash
rm -rf build/ install/ log/
colcon build
source install/setup.bash
```

### Launch Flask Web API + ROS 2 nodes

```bash
ros2 launch code_py ejecutar.launch.py
```
---
##  OPEN WEB INTERFACE
 [http://127.0.0.1:5000](http://127.0.0.1:5000)

---
