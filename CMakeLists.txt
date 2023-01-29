cmake_minimum_required(VERSION 3.14)

project(
    cppgl-boilerplate
    VERSION 0.1.0
    LANGUAGES C CXX
)

find_package(glfw3 REQUIRED)

add_subdirectory(external)
add_subdirectory(src)

add_executable(cppgl-boilerplate src/main.cpp)
target_link_libraries(cppgl-boilerplate spdlog::spdlog glfw glad platform)