# lib
cmake_minimum_required(VERSION 2.8.12.2)
project(lib)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wextra -std=c11 -Wall -Werror ")


include_directories(D:/GitHub/Clang/lib/inc)



add_library(lib D:/GitHub/Clang/lib/src/lib_main.c )





