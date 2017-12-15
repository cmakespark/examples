
set(${TARGET_NAME}_SOURCES
    car.cpp
)

set(${TARGET_NAME}_PUBLIC_HEADERS
    complexlib.h
    car.h
)

set(${TARGET_NAME}_PRIVATE_HEADERS
    car_p.h
)

set(${TARGET_NAME}_DEPENDENT_PACKAGES
)

add_definitions(-DCOMPLEXLIB_LIBRARY_BUILD)

# will be a static or dynamic library based on the setting of BUILD_SHARED_LIBS
# see: https://cmake.org/cmake/help/v2.8.12/cmake.html#command%3aadd_library
# The header files are also included in the add_library command, so that the automoc functionality
# will work.
add_library(${TARGET_NAME}
            ${${TARGET_NAME}_SOURCES}
            ${${TARGET_NAME}_PUBLIC_HEADERS}
            ${${TARGET_NAME}_PRIVATE_HEADERS})
add_library(${PROJECT_NAME_PREFIX}${SO_VERSION}::${TARGET_NAME} ALIAS ${TARGET_NAME})

# Add directories of this library
target_include_directories(${TARGET_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    )
# add the Qtlibraries to the list of linked libraries
# the Qt libraries are added as PUBLIC, so that projects using this module will transitively
# link to these libraries as well. Include paths and compiler settings will also be promoted.
target_link_libraries(${TARGET_NAME} PUBLIC )

include(GeneratePackage)
