# lib2
cmake_minimum_required(VERSION 2.8.12.2)
project(lib2)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wextra -std=c11 -Wall -Werror ")




add_library(lib2 D:/GitHub/Clang/lib2/src/lib_main.c )





