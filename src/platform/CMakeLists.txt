cmake_minimum_required(VERSION 3.14)

set(platform_src_files
    window.cpp
    window.hpp
)

add_library(platform ${platform_src_files})
target_include_directories(platform PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(platform glad spdlog::spdlog)