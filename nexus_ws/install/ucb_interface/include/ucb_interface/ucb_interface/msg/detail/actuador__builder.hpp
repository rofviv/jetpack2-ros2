// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__ACTUADOR__BUILDER_HPP_
#define UCB_INTERFACE__MSG__DETAIL__ACTUADOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/msg/detail/actuador__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace msg
{

namespace builder
{

class Init_Actuador_command
{
public:
  Init_Actuador_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ucb_interface::msg::Actuador command(::ucb_interface::msg::Actuador::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::msg::Actuador msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::msg::Actuador>()
{
  return ucb_interface::msg::builder::Init_Actuador_command();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__ACTUADOR__BUILDER_HPP_
