find_package(${PACKAGE_NAME} REQUIRED)

add_executable(example main.cpp)
target_link_libraries(example PUBLIC CC1::simplelib)

