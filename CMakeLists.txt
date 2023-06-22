cmake_minimum_required(VERSION 3.1)

project(BigNums)

add_executable(main 1.cpp BigNums.cpp)
target_include_directories(main PUBLIC include/)
add_library(BigNums BigNums.cpp)
target_include_directories(BigNums PUBLIC include/)
