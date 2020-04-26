cmake_minimum_required(VERSION 3.15)
project(6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(6
        Customer.cpp
        Customer.h
        Invoice.cpp
        Invoice.h
        main.cpp
        Person.cpp
        Person.h
        Product.cpp
        Product.h
        Salesman.cpp
        Salesman.h)
