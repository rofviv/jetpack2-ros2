// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ucb_interface__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interface__msg__Motor __declspec(deprecated)
#endif

namespace ucb_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_left = 0.0f;
      this->pwm_right = 0.0f;
      this->factor_left = 0.0f;
      this->factor_right = 0.0f;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_left = 0.0f;
      this->pwm_right = 0.0f;
      this->factor_left = 0.0f;
      this->factor_right = 0.0f;
    }
  }

  // field types and members
  using _pwm_left_type =
    float;
  _pwm_left_type pwm_left;
  using _pwm_right_type =
    float;
  _pwm_right_type pwm_right;
  using _factor_left_type =
    float;
  _factor_left_type factor_left;
  using _factor_right_type =
    float;
  _factor_right_type factor_right;

  // setters for named parameter idiom
  Type & set__pwm_left(
    const float & _arg)
  {
    this->pwm_left = _arg;
    return *this;
  }
  Type & set__pwm_right(
    const float & _arg)
  {
    this->pwm_right = _arg;
    return *this;
  }
  Type & set__factor_left(
    const float & _arg)
  {
    this->factor_left = _arg;
    return *this;
  }
  Type & set__factor_right(
    const float & _arg)
  {
    this->factor_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interface::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interface::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interface::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interface::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interface::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interface::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interface__msg__Motor
    std::shared_ptr<ucb_interface::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interface__msg__Motor
    std::shared_ptr<ucb_interface::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->pwm_left != other.pwm_left) {
      return false;
    }
    if (this->pwm_right != other.pwm_right) {
      return false;
    }
    if (this->factor_left != other.factor_left) {
      return false;
    }
    if (this->factor_right != other.factor_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  ucb_interface::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_
