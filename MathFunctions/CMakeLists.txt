cmake_minimum_required(VERSION 3.6)
project(MathFunctions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(MathFunctions ${SOURCE_FILES})