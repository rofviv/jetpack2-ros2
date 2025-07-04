// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestNestedBoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_test_msgs/msg/detail/test_nested_bounded_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "rosbridge_test_msgs/msg/detail/test_float32_bounded_array__traits.hpp"

namespace rosbridge_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestNestedBoundedArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestNestedBoundedArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestNestedBoundedArray & msg, bool use_flow_style = false)
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

}  // namespace rosbridge_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbridge_test_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbridge_test_msgs::msg::TestNestedBoundedArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::msg::TestNestedBoundedArray & msg)
{
  return rosbridge_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestNestedBoundedArray>()
{
  return "rosbridge_test_msgs::msg::TestNestedBoundedArray";
}

template<>
inline const char * name<rosbridge_test_msgs::msg::TestNestedBoundedArray>()
{
  return "rosbridge_test_msgs/msg/TestNestedBoundedArray";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::integral_constant<bool, has_fixed_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::integral_constant<bool, has_bounded_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>::value> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_
