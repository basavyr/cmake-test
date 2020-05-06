cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)


set(CMAKE_CXX_FLAGS  "-std=c++17")


project(CMAKE_TEST)

include_directories(include)
add_subdirectory(src)

add_library(test STATIC ./src/test.cc)

# target_link_libraries(CMAKE_TEST test )
add_compile_options(-Wall -Wextra -Wpedantic)