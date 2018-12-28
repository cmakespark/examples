cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)

project(SimpleApp LANGUAGES CXX)

# Download build system
if(DEFINED ENV{CMAKESPARK})
    list(APPEND CMAKE_MODULE_PATH "$ENV{CMAKESPARK}")
    message(STATUS "Using cmakespark from $ENV{CMAKESPARK}")
else()
    if(NOT EXISTS "${CMAKE_BINARY_DIR}/buildsys")
        message(STATUS "Downloading buildsystem...")

        find_package(Git REQUIRED)
        execute_process(COMMAND ${GIT_EXECUTABLE} clone --branch master git@github.com:cmakespark/cmake.git ${CMAKE_BINARY_DIR}/buildsys)
    endif()
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/buildsys")
endif()

# Include common cmake modules
include(CommonConfig)

#include required libraries and include directories
find_package(CC2SimpleLib REQUIRED)

add_subdirectory(src)
