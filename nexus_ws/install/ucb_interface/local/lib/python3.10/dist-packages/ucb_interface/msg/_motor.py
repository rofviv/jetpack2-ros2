# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ucb_interface:msg/Motor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motor(type):
    """Metaclass of message 'Motor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ucb_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ucb_interface.msg.Motor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motor(metaclass=Metaclass_Motor):
    """Message class 'Motor'."""

    __slots__ = [
        '_pwm_left',
        '_pwm_right',
        '_factor_left',
        '_factor_right',
    ]

    _fields_and_field_types = {
        'pwm_left': 'float',
        'pwm_right': 'float',
        'factor_left': 'float',
        'factor_right': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pwm_left = kwargs.get('pwm_left', float())
        self.pwm_right = kwargs.get('pwm_right', float())
        self.factor_left = kwargs.get('factor_left', float())
        self.factor_right = kwargs.get('factor_right', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pwm_left != other.pwm_left:
            return False
        if self.pwm_right != other.pwm_right:
            return False
        if self.factor_left != other.factor_left:
            return False
        if self.factor_right != other.factor_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pwm_left(self):
        """Message field 'pwm_left'."""
        return self._pwm_left

    @pwm_left.setter
    def pwm_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pwm_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pwm_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pwm_left = value

    @builtins.property
    def pwm_right(self):
        """Message field 'pwm_right'."""
        return self._pwm_right

    @pwm_right.setter
    def pwm_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pwm_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pwm_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pwm_right = value

    @builtins.property
    def factor_left(self):
        """Message field 'factor_left'."""
        return self._factor_left

    @factor_left.setter
    def factor_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'factor_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'factor_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._factor_left = value

    @builtins.property
    def factor_right(self):
        """Message field 'factor_right'."""
        return self._factor_right

    @factor_right.setter
    def factor_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'factor_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'factor_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._factor_right = value
