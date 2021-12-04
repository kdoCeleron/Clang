cmake_minimum_required(VERSION 2.8.12.2)
project(main_apl)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wextra -std=c11 -Wall -Werror")

include_directories(inc)
include_directories(../lib/inc)
add_executable(main_apl src/main.c src/func1.c)
target_link_libraries(main_apl test_lib)
