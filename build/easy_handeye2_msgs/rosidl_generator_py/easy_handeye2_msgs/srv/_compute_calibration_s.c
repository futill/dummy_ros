// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from easy_handeye2_msgs:srv/ComputeCalibration.idl
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
#include "easy_handeye2_msgs/srv/detail/compute_calibration__struct.h"
#include "easy_handeye2_msgs/srv/detail/compute_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool easy_handeye2_msgs__srv__compute_calibration__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("easy_handeye2_msgs.srv._compute_calibration.ComputeCalibration_Request", full_classname_dest, 70) == 0);
  }
  easy_handeye2_msgs__srv__ComputeCalibration_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * easy_handeye2_msgs__srv__compute_calibration__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputeCalibration_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("easy_handeye2_msgs.srv._compute_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputeCalibration_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "easy_handeye2_msgs/srv/detail/compute_calibration__struct.h"
// already included above
// #include "easy_handeye2_msgs/srv/detail/compute_calibration__functions.h"

bool easy_handeye2_msgs__msg__handeye_calibration__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * easy_handeye2_msgs__msg__handeye_calibration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool easy_handeye2_msgs__srv__compute_calibration__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("easy_handeye2_msgs.srv._compute_calibration.ComputeCalibration_Response", full_classname_dest, 71) == 0);
  }
  easy_handeye2_msgs__srv__ComputeCalibration_Response * ros_message = _ros_message;
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration");
    if (!field) {
      return false;
    }
    if (!easy_handeye2_msgs__msg__handeye_calibration__convert_from_py(field, &ros_message->calibration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * easy_handeye2_msgs__srv__compute_calibration__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputeCalibration_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("easy_handeye2_msgs.srv._compute_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputeCalibration_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  easy_handeye2_msgs__srv__ComputeCalibration_Response * ros_message = (easy_handeye2_msgs__srv__ComputeCalibration_Response *)raw_ros_message;
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration
    PyObject * field = NULL;
    field = easy_handeye2_msgs__msg__handeye_calibration__convert_to_py(&ros_message->calibration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
