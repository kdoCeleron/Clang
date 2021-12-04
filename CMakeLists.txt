cmake_minimum_required(VERSION 2.8.12.2)
project(SampleCode C)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -std=c11 -Wall -Werror")

add_subdirectory(./apl)
add_subdirectory(./lib)
add_subdirectory(./lib2)

