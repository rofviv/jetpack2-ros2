// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_H_
#define UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motor in the package ucb_interface.
typedef struct ucb_interface__msg__Motor
{
  float pwm_left;
  float pwm_right;
  float factor_left;
  float factor_right;
} ucb_interface__msg__Motor;

// Struct for a sequence of ucb_interface__msg__Motor.
typedef struct ucb_interface__msg__Motor__Sequence
{
  ucb_interface__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interface__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_H_
