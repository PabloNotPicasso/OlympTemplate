cmake_minimum_required(VERSION 3.5)

set(TARGET olymp)
project(${TARGET} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set( SRC main.cpp )

add_executable(${TARGET} ${SRC})
target_compile_options( ${TARGET} PRIVATE -DDEBUG)