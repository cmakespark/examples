
set(${TARGET_NAME}_SOURCES
    main.cpp
)

set(${TARGET_NAME}_PUBLIC_HEADERS
)

set(${TARGET_NAME}_PRIVATE_HEADERS
)

add_executable(${TARGET_NAME}
    ${${TARGET_NAME}_SOURCES}
    ${${TARGET_NAME}_PUBLIC_HEADERS}
    ${${TARGET_NAME}_PRIVATE_HEADERS})

# add the Qtlibraries to the list of linked libraries
# the Qt libraries are added as PUBLIC, so that projects using this module will transitively
# link to these libraries as well. Include paths and compiler settings will also be promoted.

target_link_libraries(${TARGET_NAME} PUBLIC CC1::ComplexLib)

set_target_properties(${TARGET_NAME} PROPERTIES
    VERSION ${FULL_VERSION}
    SOVERSION ${SO_VERSION}
    PUBLIC_HEADER "${${TARGET_NAME}_PUBLIC_HEADERS}"
    PRIVATE_HEADER "${${TARGET_NAME}_PRIVATE_HEADERS}"
    )

install(TARGETS ${TARGET_NAME} DESTINATION bin)
