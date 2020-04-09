cmake_minimum_required(VERSION 3.15)
project(2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(2
        factory.cpp
        factory.h
        main.cpp
        mask.cpp
        mask.h
        materials.cpp
        materials.h)
