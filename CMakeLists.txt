cmake_minimum_required(VERSION 3.14)

project(
    cppgl-boilerplate
    VERSION 0.1.0
    LANGUAGES CXX
)

find_package(glfw3 REQUIRED)

add_subdirectory(src)

target_link_libraries(cppgl-boilerplate glfw)