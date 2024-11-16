cmake_minimum_required(VERSION 3.28)
project(lab__2)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab__2 main.cpp
        circle.cpp
        rectangle.cpp
        Shape.h
        Shape.cpp
)
