cmake_minimum_required(VERSION 3.15)
project(untitled1)
find_package(OpenCV)
#find_library(OpenCV)
include_directories( ${OpenCV_INCLUDE_DIRS} )

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)

add_executable(untitled1 main.cpp id.cpp)
target_link_libraries( untitled1 ${OpenCV_LIBS} )