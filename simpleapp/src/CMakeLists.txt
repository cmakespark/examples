
set(SIMPLEAPP_SOURCES
    main.cpp
)

set(SIMPLEAPP_HEADERS
)

createapp(NAME SimpleApp
    VERSION 2.0.0
    CONSOLE
    SOURCES ${SIMPLEAPP_SOURCES}
    HEADERS ${SIMPLEAPP_HEADERS}
    DEPS CC2::SimpleLib)

# Copy dependent lib
add_custom_command(TARGET SimpleApp POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                           $<TARGET_FILE:CC2::SimpleLib>
                           ${CMAKE_BINARY_DIR}/bin)
