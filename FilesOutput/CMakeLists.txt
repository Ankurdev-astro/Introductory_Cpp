cmake_minimum_required(VERSION 3.6)
project(FilesOutput)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(FilesOutput ${SOURCE_FILES})