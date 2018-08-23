###############################
# Project specific parameters #
# Change as you see fit       #
###############################
set(PROJECT_NAME_PREFIX CC)
set(PROJECT_BASE_NAME ComplexLib)
set(FULL_VERSION 1.0.0)
set(SO_VERSION 1)

include(DefineProject)

# When set to OFF, the library will be built as a static library
if (${BUILD_SHARED_LIBS})
    add_definitions(-D${PROJECT_NAME_PREFIX}${PROJECT_BASE_NAME}_BUILD_SHARED_LIBS)
endif()

add_subdirectory(src)
