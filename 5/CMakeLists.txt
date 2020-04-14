cmake_minimum_required(VERSION 3.15)
project(5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(5
        main.cpp
        organization.cpp
        organization.h regionx.h regiony.h regionx.cpp regiony.cpp who.cpp who.h)
