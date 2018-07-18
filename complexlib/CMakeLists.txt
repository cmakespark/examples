cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)

project(complexlib)

# Download build system
if(DEFINED ENV{CMAKE_COMMON})
    list(APPEND CMAKE_MODULE_PATH "$ENV{CMAKE_COMMON}")
else()
    if(NOT EXISTS "${CMAKE_BINARY_DIR}/buildsys")
        message(STATUS "Downloading buildsystem...")

        find_package(Git REQUIRED)
        execute_process(COMMAND ${GIT_EXECUTABLE} clone --branch master git@github.com:frederikvannoote/cmake-common.git ${CMAKE_BINARY_DIR}/buildsys)
    endif()
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/buildsys")
endif()

###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(QT_MAJOR_VERSION_REQUIRED 5)
option(BUILD_SHARED_LIBS "Build as shared library" OFF)


# Include common cmake modules
include(CommonConfig)

add_subdirectory(complexlib)
add_subdirectory(QComplexLib)
add_subdirectory(complexapp)
