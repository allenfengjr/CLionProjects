cmake_minimum_required(VERSION 3.15)
project(openmp)

set(CMAKE_CXX_STANDARD 14)

add_executable(openmp main.cpp)

FIND_PACKAGE(OpenMP REQUIRED)
if(OPENMP_FOUND)
    set(CMAKE_C_FLAGS "${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

