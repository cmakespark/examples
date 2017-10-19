cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)

project(complexlib)

###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(QT_MAJOR_VERSION_REQUIRED 5)
option(BUILD_SHARED_LIBS "Build as shared library" OFF)


# Include common cmake modules
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
include(CommonConfig)

add_subdirectory(complexlib)
add_subdirectory(QComplexLib)
add_subdirectory(complexapp)
