cmake_minimum_required(VERSION 3.4.3 FATAL_ERROR)
project(simplelib)

# Download build system
if(DEFINED ENV{CMAKESPARK})
    list(APPEND CMAKE_MODULE_PATH "$ENV{CMAKESPARK}")
else()
    if(NOT EXISTS "${CMAKE_BINARY_DIR}/buildsys")
        message(STATUS "Downloading buildsystem...")

        find_package(Git REQUIRED)
        execute_process(COMMAND ${GIT_EXECUTABLE} clone --branch master git@github.com:cmakespark/cmake.git ${CMAKE_BINARY_DIR}/buildsys)
    endif()
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/buildsys")
endif()

###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(PROJECT_NAME_PREFIX CC)
set(PROJECT_BASE_NAME simplelib)
set(FULL_VERSION 1.0.0)
set(SO_VERSION 1)

#################
# Build options #
#################
# When set to ON, the library will be built as a static library
option(BUILD_SHARED_LIBS "Build shared library" OFF)

# Include common cmake modules
include(CommonConfig)

include(DefineProject)

add_subdirectory(src)
add_subdirectory(example)
