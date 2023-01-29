cmake_minimum_required(VERSION 3.14)
add_library (app app.cpp app)
target_include_directories(app PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")