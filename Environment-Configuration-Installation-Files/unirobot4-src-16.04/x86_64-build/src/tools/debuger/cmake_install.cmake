# Install script for directory: /home/jwj-ubuntu16/unirobot4_V2_SKILL/src/tools/debuger

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin")
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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64" TYPE EXECUTABLE FILES "/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/debuger")
  if(EXISTS "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/jwj-ubuntu16/unirobot4_V2_SKILL/bin/x86_64/debuger")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/ui/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/tcp_client/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/image_monitor/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/image_debuger/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/camera_setter/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/action_debuger/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/action_monitor/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/walk_remote/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/joint_revise/cmake_install.cmake")
  include("/home/jwj-ubuntu16/unirobot4_V2_SKILL/x86_64-build/src/tools/debuger/team_monitor/cmake_install.cmake")

endif()

