cmake_minimum_required(VERSION 3.5.2 FATAL_ERROR)

project(ComplexApp LANGUAGES CXX)

###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(PROJECT_NAME_PREFIX CC)
set(PROJECT_BASE_NAME ComplexApp)
set(FULL_VERSION 1.0.0)
set(SO_VERSION 1)

#################
# Build options #
#################

include(DefineProject)

add_subdirectory(src)
