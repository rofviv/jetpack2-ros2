// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_test_msgs:msg/TestHeaderArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_test_msgs/msg/detail/test_header_array__rosidl_typesupport_introspection_c.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_test_msgs/msg/detail/test_header_array__functions.h"
#include "rosbridge_test_msgs/msg/detail/test_header_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__msg__TestHeaderArray__init(message_memory);
}

void rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_fini_function(void * message_memory)
{
  rosbridge_test_msgs__msg__TestHeaderArray__fini(message_memory);
}

size_t rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__size_function__TestHeaderArray__header(
  const void * untyped_member)
{
  const std_msgs__msg__Header__Sequence * member =
    (const std_msgs__msg__Header__Sequence *)(untyped_member);
  return member->size;
}

const void * rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_const_function__TestHeaderArray__header(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Header__Sequence * member =
    (const std_msgs__msg__Header__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_function__TestHeaderArray__header(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Header__Sequence * member =
    (std_msgs__msg__Header__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__fetch_function__TestHeaderArray__header(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Header * item =
    ((const std_msgs__msg__Header *)
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_const_function__TestHeaderArray__header(untyped_member, index));
  std_msgs__msg__Header * value =
    (std_msgs__msg__Header *)(untyped_value);
  *value = *item;
}

void rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__assign_function__TestHeaderArray__header(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Header * item =
    ((std_msgs__msg__Header *)
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_function__TestHeaderArray__header(untyped_member, index));
  const std_msgs__msg__Header * value =
    (const std_msgs__msg__Header *)(untyped_value);
  *item = *value;
}

bool rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__resize_function__TestHeaderArray__header(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Header__Sequence * member =
    (std_msgs__msg__Header__Sequence *)(untyped_member);
  std_msgs__msg__Header__Sequence__fini(member);
  return std_msgs__msg__Header__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_member_array[1] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__msg__TestHeaderArray, header),  // bytes offset in struct
    NULL,  // default value
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__size_function__TestHeaderArray__header,  // size() function pointer
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_const_function__TestHeaderArray__header,  // get_const(index) function pointer
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__get_function__TestHeaderArray__header,  // get(index) function pointer
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__fetch_function__TestHeaderArray__header,  // fetch(index, &value) function pointer
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__assign_function__TestHeaderArray__header,  // assign(index, value) function pointer
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__resize_function__TestHeaderArray__header  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_members = {
  "rosbridge_test_msgs__msg",  // message namespace
  "TestHeaderArray",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__msg__TestHeaderArray),
  rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_member_array,  // message members
  rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_type_support_handle = {
  0,
  &rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, msg, TestHeaderArray)() {
  rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_test_msgs__msg__TestHeaderArray__rosidl_typesupport_introspection_c__TestHeaderArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
