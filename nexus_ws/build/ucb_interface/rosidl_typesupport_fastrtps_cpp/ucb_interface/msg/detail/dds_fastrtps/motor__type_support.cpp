// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice
#include "ucb_interface/msg/detail/motor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ucb_interface/msg/detail/motor__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ucb_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
cdr_serialize(
  const ucb_interface::msg::Motor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pwm_left
  cdr << ros_message.pwm_left;
  // Member: pwm_right
  cdr << ros_message.pwm_right;
  // Member: factor_left
  cdr << ros_message.factor_left;
  // Member: factor_right
  cdr << ros_message.factor_right;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ucb_interface::msg::Motor & ros_message)
{
  // Member: pwm_left
  cdr >> ros_message.pwm_left;

  // Member: pwm_right
  cdr >> ros_message.pwm_right;

  // Member: factor_left
  cdr >> ros_message.factor_left;

  // Member: factor_right
  cdr >> ros_message.factor_right;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
get_serialized_size(
  const ucb_interface::msg::Motor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pwm_left
  {
    size_t item_size = sizeof(ros_message.pwm_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_right
  {
    size_t item_size = sizeof(ros_message.pwm_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factor_left
  {
    size_t item_size = sizeof(ros_message.factor_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: factor_right
  {
    size_t item_size = sizeof(ros_message.factor_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
max_serialized_size_Motor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: pwm_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: factor_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: factor_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ucb_interface::msg::Motor;
    is_plain =
      (
      offsetof(DataType, factor_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Motor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ucb_interface::msg::Motor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ucb_interface::msg::Motor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ucb_interface::msg::Motor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Motor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Motor__callbacks = {
  "ucb_interface::msg",
  "Motor",
  _Motor__cdr_serialize,
  _Motor__cdr_deserialize,
  _Motor__get_serialized_size,
  _Motor__max_serialized_size
};

static rosidl_message_type_support_t _Motor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ucb_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ucb_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ucb_interface::msg::Motor>()
{
  return &ucb_interface::msg::typesupport_fastrtps_cpp::_Motor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ucb_interface, msg, Motor)() {
  return &ucb_interface::msg::typesupport_fastrtps_cpp::_Motor__handle;
}

#ifdef __cplusplus
}
#endif
