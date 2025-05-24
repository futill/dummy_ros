#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dummy2_interface::dummy2_interface__rosidl_typesupport_fastrtps_c" for configuration "Release"
set_property(TARGET dummy2_interface::dummy2_interface__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dummy2_interface::dummy2_interface__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdummy2_interface__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_RELEASE "libdummy2_interface__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS dummy2_interface::dummy2_interface__rosidl_typesupport_fastrtps_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_dummy2_interface::dummy2_interface__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libdummy2_interface__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
