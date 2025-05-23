cmake_minimum_required(VERSION 3.8)
project(dummy2_hw)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(controller_manager REQUIRED)
find_package(ros2_control REQUIRED)
find_package(ros2_controllers REQUIRED)
find_package(dummy2_interface REQUIRED)

# 查找依赖
# find_package(ament_cmake REQUIRED)
# find_package(hardware_interface REQUIRED)
# find_package(pluginlib REQUIRED)
# find_package(rclcpp REQUIRED)

# 添加硬件插件
add_library(dummy2_hardware SHARED src/dummy2_hardware.cpp)
ament_target_dependencies(dummy2_hardware hardware_interface pluginlib rclcpp dummy2_interface)
# 安装插件
pluginlib_export_plugin_description_file(hardware_interface dummy2_hardware.xml)

# 安装库和头文件
install(TARGETS dummy2_hardware
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# 安装 URDF 和配置文件
# install(DIRECTORY urdf config
#   DESTINATION share/${PROJECT_NAME}
# )

ament_package()

# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

# ament_package()
