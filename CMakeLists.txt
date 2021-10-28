cmake_minimum_required(VERSION 3.7)

project(csvi)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(csvi main.cpp)
target_link_libraries(csvi ${SDL2_LIBRARIES})
