# Install script for directory: /root/unirobot4_V2_SKILL/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/unirobot4_V2_SKILL/bin")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/unirobot4_V2_SKILL/bin/aarch64/data")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/unirobot4_V2_SKILL/bin/aarch64" TYPE DIRECTORY FILES "/root/unirobot4_V2_SKILL/src/data")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/unirobot4_V2_SKILL/bin/code_format.py;/root/unirobot4_V2_SKILL/bin/common.py;/root/unirobot4_V2_SKILL/bin/config.py;/root/unirobot4_V2_SKILL/bin/download.py;/root/unirobot4_V2_SKILL/bin/exec.py;/root/unirobot4_V2_SKILL/bin/get_code_lines.py;/root/unirobot4_V2_SKILL/bin/install_auto_run.py;/root/unirobot4_V2_SKILL/bin/set_network.py;/root/unirobot4_V2_SKILL/bin/ssh_connection.py;/root/unirobot4_V2_SKILL/bin/start_robot.py;/root/unirobot4_V2_SKILL/bin/uninstall_auto_run.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/unirobot4_V2_SKILL/bin" TYPE PROGRAM PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ GROUP_WRITE FILES
    "/root/unirobot4_V2_SKILL/src/scripts/code_format.py"
    "/root/unirobot4_V2_SKILL/src/scripts/common.py"
    "/root/unirobot4_V2_SKILL/src/scripts/config.py"
    "/root/unirobot4_V2_SKILL/src/scripts/download.py"
    "/root/unirobot4_V2_SKILL/src/scripts/exec.py"
    "/root/unirobot4_V2_SKILL/src/scripts/get_code_lines.py"
    "/root/unirobot4_V2_SKILL/src/scripts/install_auto_run.py"
    "/root/unirobot4_V2_SKILL/src/scripts/set_network.py"
    "/root/unirobot4_V2_SKILL/src/scripts/ssh_connection.py"
    "/root/unirobot4_V2_SKILL/src/scripts/start_robot.py"
    "/root/unirobot4_V2_SKILL/src/scripts/uninstall_auto_run.py"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/unirobot4_V2_SKILL/aarch64-build/src/lib/cmake_install.cmake")
  include("/root/unirobot4_V2_SKILL/aarch64-build/src/controller/cmake_install.cmake")

endif()

