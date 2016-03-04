cmake_minimum_required(VERSION 2.8)
project(unittesting)

add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(unittesting_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(src_tests)

target_link_libraries(unittesting_run src)