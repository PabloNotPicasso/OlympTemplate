cmake_minimum_required(VERSION 3.5)

set(TARGET olymp)
add_definitions(-DDEBUG=TRUE)
project(${TARGET} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set( SRC main.cpp )

add_executable(${TARGET} ${SRC})