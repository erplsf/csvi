cmake_minimum_required(VERSION 3.7)

project(csvi)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

find_package(Vulkan REQUIRED)
include_directories(${Vulkan_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_link_libraries(csvi ${SDL2_LIBRARIES})
target_link_libraries(csvi ${Vulkan_LIBRARIES})
