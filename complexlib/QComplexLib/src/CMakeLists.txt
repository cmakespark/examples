
set(${TARGET_NAME}_SOURCES
    qcar.cpp
)

set(${TARGET_NAME}_PUBLIC_HEADERS
    qcomplexlib.h
    qcar.h
)

set(${TARGET_NAME}_PRIVATE_HEADERS
    qcar_p.h
)

set(${TARGET_NAME}_INCLUDE_DIRS
    ${CMAKE_CURRENT_LIST_DIR}
)

set(${TARGET_NAME}_DEPENDENT_PACKAGES
)

add_definitions(-DQCOMPLEXLIB_LIBRARY_BUILD)

# will be a static or dynamic library based on the setting of BUILD_SHARED_LIBS
# see: https://cmake.org/cmake/help/v2.8.12/cmake.html#command%3aadd_library
# The header files are also included in the add_library command, so that the automoc functionality
# will work.
add_library(${TARGET_NAME}
            ${${TARGET_NAME}_SOURCES}
            ${${TARGET_NAME}_PUBLIC_HEADERS}
            ${${TARGET_NAME}_PRIVATE_HEADERS})

# Add directories of this library
target_include_directories(${TARGET_NAME} PRIVATE ${${TARGET_NAME}_INCLUDE_DIRS})

# add the Qtlibraries to the list of linked libraries
# the Qt libraries are added as PUBLIC, so that projects using this module will transitively
# link to these libraries as well. Include paths and compiler settings will also be promoted.
target_link_libraries(${TARGET_NAME} PUBLIC CC1::ComplexLib Qt5::Core)

include(GeneratePackage)
