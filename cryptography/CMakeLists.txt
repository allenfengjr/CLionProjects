cmake_minimum_required(VERSION 3.15)
project(cryptography)

set(CMAKE_CXX_STANDARD 14)

add_executable(cryptography casear.cpp vigenere.cpp main.cpp transposition_cipher.h)