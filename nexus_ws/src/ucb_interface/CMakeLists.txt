cmake_minimum_required(VERSION 3.8)
project(ucb_interface)

# === Dependencias principales ===
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

# === Generar interfaces de mensaje ===
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Motor.msg"
  "msg/Actuador.msg"
  DEPENDENCIES std_msgs
)

# === Soporte para C++ y Python ===
rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

rosidl_get_typesupport_target(py_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_python")

ament_package()
