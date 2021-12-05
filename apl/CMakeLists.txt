# apl
cmake_minimum_required(VERSION 2.8.12.2)
project(apl)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -Wextra -std=c11 -Wall -Werror ")


include_directories(D:/GitHub/Clang/apl/inc)

include_directories(D:/GitHub/Clang/lib/inc)



add_executable(apl D:/GitHub/Clang/apl/src/func1.c D:/GitHub/Clang/apl/src/main.c )



target_link_libraries(apl lib )



