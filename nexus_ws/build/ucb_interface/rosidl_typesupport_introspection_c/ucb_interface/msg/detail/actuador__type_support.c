// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ucb_interface/msg/detail/actuador__rosidl_typesupport_introspection_c.h"
#include "ucb_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ucb_interface/msg/detail/actuador__functions.h"
#include "ucb_interface/msg/detail/actuador__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ucb_interface__msg__Actuador__init(message_memory);
}

void ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_fini_function(void * message_memory)
{
  ucb_interface__msg__Actuador__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ucb_interface__msg__Actuador, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_members = {
  "ucb_interface__msg",  // message namespace
  "Actuador",  // message name
  1,  // number of fields
  sizeof(ucb_interface__msg__Actuador),
  ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_member_array,  // message members
  ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_init_function,  // function to initialize message memory (memory has to be allocated)
  ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_type_support_handle = {
  0,
  &ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ucb_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ucb_interface, msg, Actuador)() {
  if (!ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_type_support_handle.typesupport_identifier) {
    ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ucb_interface__msg__Actuador__rosidl_typesupport_introspection_c__Actuador_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
