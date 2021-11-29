cmake_minimum_required(VERSION 3.20)
project(Figure)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Figure
        include/Figure.h
        src/Figure.cpp
        src/main.cpp)
