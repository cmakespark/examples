cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)

project(SimpleApp LANGUAGES CXX)

###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(PROJECT_NAME_PREFIX CC)
set(PROJECT_BASE_NAME SimpleApp)
set(FULL_VERSION 1.0.0)
set(SO_VERSION 1)

#################
# Build options #
#################

# Include common cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
include(CommonConfig)

#include required libraries and include directories
find_package(CC1simplelib REQUIRED)

include(DefineProject)

add_subdirectory(src)
