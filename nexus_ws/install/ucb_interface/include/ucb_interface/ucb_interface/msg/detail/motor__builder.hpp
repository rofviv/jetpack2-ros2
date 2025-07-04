// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define UCB_INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace msg
{

namespace builder
{

class Init_Motor_factor_right
{
public:
  explicit Init_Motor_factor_right(::ucb_interface::msg::Motor & msg)
  : msg_(msg)
  {}
  ::ucb_interface::msg::Motor factor_right(::ucb_interface::msg::Motor::_factor_right_type arg)
  {
    msg_.factor_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::msg::Motor msg_;
};

class Init_Motor_factor_left
{
public:
  explicit Init_Motor_factor_left(::ucb_interface::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_factor_right factor_left(::ucb_interface::msg::Motor::_factor_left_type arg)
  {
    msg_.factor_left = std::move(arg);
    return Init_Motor_factor_right(msg_);
  }

private:
  ::ucb_interface::msg::Motor msg_;
};

class Init_Motor_pwm_right
{
public:
  explicit Init_Motor_pwm_right(::ucb_interface::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_factor_left pwm_right(::ucb_interface::msg::Motor::_pwm_right_type arg)
  {
    msg_.pwm_right = std::move(arg);
    return Init_Motor_factor_left(msg_);
  }

private:
  ::ucb_interface::msg::Motor msg_;
};

class Init_Motor_pwm_left
{
public:
  Init_Motor_pwm_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_pwm_right pwm_left(::ucb_interface::msg::Motor::_pwm_left_type arg)
  {
    msg_.pwm_left = std::move(arg);
    return Init_Motor_pwm_right(msg_);
  }

private:
  ::ucb_interface::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::msg::Motor>()
{
  return ucb_interface::msg::builder::Init_Motor_pwm_left();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_
