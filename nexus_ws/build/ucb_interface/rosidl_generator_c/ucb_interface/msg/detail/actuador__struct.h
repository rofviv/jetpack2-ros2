// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_H_
#define UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Actuador in the package ucb_interface.
typedef struct ucb_interface__msg__Actuador
{
  rosidl_runtime_c__String command;
} ucb_interface__msg__Actuador;

// Struct for a sequence of ucb_interface__msg__Actuador.
typedef struct ucb_interface__msg__Actuador__Sequence
{
  ucb_interface__msg__Actuador * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interface__msg__Actuador__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_H_
