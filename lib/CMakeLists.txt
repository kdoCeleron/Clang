cmake_minimum_required(VERSION 2.8.12.2)
project(test_lib)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wextra -std=c11 -Wall -Werror")

include_directories(inc)
add_library(test_lib src/lib_main.c)

set(CMAKE_C_STANDARD 11)
