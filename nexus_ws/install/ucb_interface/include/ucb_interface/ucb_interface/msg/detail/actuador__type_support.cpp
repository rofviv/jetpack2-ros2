// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ucb_interface/msg/detail/actuador__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ucb_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Actuador_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ucb_interface::msg::Actuador(_init);
}

void Actuador_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ucb_interface::msg::Actuador *>(message_memory);
  typed_message->~Actuador();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Actuador_message_member_array[1] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ucb_interface::msg::Actuador, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Actuador_message_members = {
  "ucb_interface::msg",  // message namespace
  "Actuador",  // message name
  1,  // number of fields
  sizeof(ucb_interface::msg::Actuador),
  Actuador_message_member_array,  // message members
  Actuador_init_function,  // function to initialize message memory (memory has to be allocated)
  Actuador_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Actuador_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Actuador_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ucb_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ucb_interface::msg::Actuador>()
{
  return &::ucb_interface::msg::rosidl_typesupport_introspection_cpp::Actuador_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ucb_interface, msg, Actuador)() {
  return &::ucb_interface::msg::rosidl_typesupport_introspection_cpp::Actuador_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
