
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
