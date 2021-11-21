cmake_minimum_required(VERSION 3.16)
project(zad3)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(zad3 src/main.cpp src/Node.cpp src/Triangle.cpp )