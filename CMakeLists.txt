cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(breakout)

add_subdirectory(thirdparty/raylib-5.0)

file(GLOB_RECURSE MY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable("${CMAKE_PROJECT_NAME}")

# Ensure MY_SOURCES is properly populated before this line
target_sources("${CMAKE_PROJECT_NAME}" PRIVATE ${MY_SOURCES})

target_link_libraries("${CMAKE_PROJECT_NAME}" PRIVATE raylib)
