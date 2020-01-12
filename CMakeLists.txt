cmake_minimum_required(VERSION 3.14)
project(gtest-example)

set(gtest_force_shared_crt ON CACHE BOOL "Build As shared lirary" FORCE)
add_subdirectory(googletest)

add_executable(example main.cpp)
target_link_libraries(example gtest gtest_main)
