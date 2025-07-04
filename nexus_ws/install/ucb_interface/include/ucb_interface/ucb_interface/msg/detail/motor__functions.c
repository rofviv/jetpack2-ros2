// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice
#include "ucb_interface/msg/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ucb_interface__msg__Motor__init(ucb_interface__msg__Motor * msg)
{
  if (!msg) {
    return false;
  }
  // pwm_left
  // pwm_right
  // factor_left
  // factor_right
  return true;
}

void
ucb_interface__msg__Motor__fini(ucb_interface__msg__Motor * msg)
{
  if (!msg) {
    return;
  }
  // pwm_left
  // pwm_right
  // factor_left
  // factor_right
}

bool
ucb_interface__msg__Motor__are_equal(const ucb_interface__msg__Motor * lhs, const ucb_interface__msg__Motor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pwm_left
  if (lhs->pwm_left != rhs->pwm_left) {
    return false;
  }
  // pwm_right
  if (lhs->pwm_right != rhs->pwm_right) {
    return false;
  }
  // factor_left
  if (lhs->factor_left != rhs->factor_left) {
    return false;
  }
  // factor_right
  if (lhs->factor_right != rhs->factor_right) {
    return false;
  }
  return true;
}

bool
ucb_interface__msg__Motor__copy(
  const ucb_interface__msg__Motor * input,
  ucb_interface__msg__Motor * output)
{
  if (!input || !output) {
    return false;
  }
  // pwm_left
  output->pwm_left = input->pwm_left;
  // pwm_right
  output->pwm_right = input->pwm_right;
  // factor_left
  output->factor_left = input->factor_left;
  // factor_right
  output->factor_right = input->factor_right;
  return true;
}

ucb_interface__msg__Motor *
ucb_interface__msg__Motor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Motor * msg = (ucb_interface__msg__Motor *)allocator.allocate(sizeof(ucb_interface__msg__Motor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interface__msg__Motor));
  bool success = ucb_interface__msg__Motor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interface__msg__Motor__destroy(ucb_interface__msg__Motor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interface__msg__Motor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interface__msg__Motor__Sequence__init(ucb_interface__msg__Motor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Motor * data = NULL;

  if (size) {
    data = (ucb_interface__msg__Motor *)allocator.zero_allocate(size, sizeof(ucb_interface__msg__Motor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interface__msg__Motor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interface__msg__Motor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ucb_interface__msg__Motor__Sequence__fini(ucb_interface__msg__Motor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ucb_interface__msg__Motor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ucb_interface__msg__Motor__Sequence *
ucb_interface__msg__Motor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__msg__Motor__Sequence * array = (ucb_interface__msg__Motor__Sequence *)allocator.allocate(sizeof(ucb_interface__msg__Motor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interface__msg__Motor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interface__msg__Motor__Sequence__destroy(ucb_interface__msg__Motor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interface__msg__Motor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interface__msg__Motor__Sequence__are_equal(const ucb_interface__msg__Motor__Sequence * lhs, const ucb_interface__msg__Motor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interface__msg__Motor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interface__msg__Motor__Sequence__copy(
  const ucb_interface__msg__Motor__Sequence * input,
  ucb_interface__msg__Motor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interface__msg__Motor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interface__msg__Motor * data =
      (ucb_interface__msg__Motor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interface__msg__Motor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interface__msg__Motor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interface__msg__Motor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
