// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ucb_interface:msg/Actuador.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_HPP_
#define UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ucb_interface__msg__Actuador __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interface__msg__Actuador __declspec(deprecated)
#endif

namespace ucb_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actuador_
{
  using Type = Actuador_<ContainerAllocator>;

  explicit Actuador_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit Actuador_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interface::msg::Actuador_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interface::msg::Actuador_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interface::msg::Actuador_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interface::msg::Actuador_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Actuador_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Actuador_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Actuador_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Actuador_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interface::msg::Actuador_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interface::msg::Actuador_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interface__msg__Actuador
    std::shared_ptr<ucb_interface::msg::Actuador_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interface__msg__Actuador
    std::shared_ptr<ucb_interface::msg::Actuador_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actuador_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Actuador_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actuador_

// alias to use template instance with default allocator
using Actuador =
  ucb_interface::msg::Actuador_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__ACTUADOR__STRUCT_HPP_
