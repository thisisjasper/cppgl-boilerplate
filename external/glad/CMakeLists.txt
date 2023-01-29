cmake_minimum_required(VERSION 3.14)

project(
    glad
    VERSION 0.1
    DESCRIPTION "Generated from GLAD"
    LANGUAGES C
)

add_library(glad src/glad.c)
target_include_directories(glad PUBLIC include)