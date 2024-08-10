cmake_minimum_required(VERSION 3.16)
project(project_name C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")
include_directories(header)
file(GLOB MAIN
	"src/*.c"
	"header/*.h"
)
add_executable(executable ${MAIN})
