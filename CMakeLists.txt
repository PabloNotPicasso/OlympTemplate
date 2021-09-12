cmake_minimum_required(VERSION 3.5)

set(TARGET olymp)
add_definitions(-DDEBUG=TRUE)
project(${TARGET} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set( SRC main.cpp )

add_executable(${TARGET} ${SRC})

#####################################################
find_program(FORMAT_CPP_PRG NAMES clang-format)

set(EXCLUDE_PATH
    "-not -path '${CMAKE_BINARY_DIR}/*'"
)

set(FIND_CPP_COMMAND
    "find ${PROJECT_SOURCE_DIR} -regex '.*\\.\\(c\\|cc\\|cpp\\|cxx\\|h\\|hh\\|hpp\\|hxx\\)$' ${EXCLUDE_PATH}"
)

add_custom_target(
    codeformat
    VERBATIM
    COMMAND bash -c "${FIND_CPP_COMMAND} | xargs -n 1 ${FORMAT_CPP_PRG} -i"
)