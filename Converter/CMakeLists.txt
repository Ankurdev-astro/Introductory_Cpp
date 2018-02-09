cmake_minimum_required(VERSION 3.6)
project(Converter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp funtions.cpp funtions.h)
add_executable(Converter ${SOURCE_FILES} funtions.cpp funtions.h)