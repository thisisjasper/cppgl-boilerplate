cmake_minimum_required(VERSION 3.14)

add_executable(cppgl-boilerplate main.cpp)

add_subdirectory(app)
add_subdirectory(glutil)

target_link_directories(cppgl-boilerplate PUBLIC app)