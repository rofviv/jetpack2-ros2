// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__ACTUADOR__TRAITS_HPP_
#define UCB_INTERFACE__MSG__DETAIL__ACTUADOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ucb_interface/msg/detail/actuador__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ucb_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Actuador & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Actuador & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Actuador & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ucb_interface

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interface::msg::Actuador & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interface::msg::Actuador & msg)
{
  return ucb_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interface::msg::Actuador>()
{
  return "ucb_interface::msg::Actuador";
}

template<>
inline const char * name<ucb_interface::msg::Actuador>()
{
  return "ucb_interface/msg/Actuador";
}

template<>
struct has_fixed_size<ucb_interface::msg::Actuador>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ucb_interface::msg::Actuador>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ucb_interface::msg::Actuador>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UCB_INTERFACE__MSG__DETAIL__ACTUADOR__TRAITS_HPP_
