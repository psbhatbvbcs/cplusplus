cmake_minimum_required(VERSION 3.24)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(bleep)

add_executable(C__
        bleep/bleep.cpp
        bleep/functions.cpp
        bleep/functions.hpp
        generic_template_class.cpp
        queue.c
        recursion_print_123.cpp
        recursion_print_321.cpp
        test.cpp)
