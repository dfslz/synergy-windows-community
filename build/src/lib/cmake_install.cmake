# Install script for directory: D:/program/synergy/synergy-1.15.1-r1/src/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/synergy")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/arch/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/base/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/client/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/io/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/ipc/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/mt/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/net/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/platform/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/server/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/synergy/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/license/cmake_install.cmake")
  include("D:/program/synergy/synergy-1.15.1-r1/build/src/lib/gui/cmake_install.cmake")

endif()

