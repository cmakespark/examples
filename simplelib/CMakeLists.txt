cmake_minimum_required(VERSION 3.4.3 FATAL_ERROR)
project(simplelib)

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
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(CommonConfig)

include(DefineProject)

add_subdirectory(src)
add_subdirectory(example)
