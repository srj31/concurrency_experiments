cmake_minimum_required(VERSION 3.22)
project(concurrency_experiments)

file(GLOB srcs
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
        )
file(GLOB headers
       "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
        )

set(CMAKE_CXX_STANDARD 14)

add_executable(concurrency_experiments
        ${srcs}
        ${headers}
        )
