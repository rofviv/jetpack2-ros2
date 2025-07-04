// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ucb_interface:msg/Motor.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ucb_interface/msg/detail/motor__struct.h"
#include "ucb_interface/msg/detail/motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ucb_interface__msg__motor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ucb_interface.msg._motor.Motor", full_classname_dest, 30) == 0);
  }
  ucb_interface__msg__Motor * ros_message = _ros_message;
  {  // pwm_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pwm_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pwm_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pwm_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // factor_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "factor_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->factor_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // factor_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "factor_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->factor_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ucb_interface__msg__motor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ucb_interface.msg._motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ucb_interface__msg__Motor * ros_message = (ucb_interface__msg__Motor *)raw_ros_message;
  {  // pwm_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pwm_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pwm_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factor_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->factor_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factor_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factor_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->factor_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factor_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
