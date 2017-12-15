###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(PROJECT_NAME_PREFIX CC)
set(PROJECT_BASE_NAME QComplexLib)
set(FULL_VERSION 1.0.0)
set(SO_VERSION 1)

include(DefineProject)

find_package(Qt5Core REQUIRED)

add_subdirectory(src)
