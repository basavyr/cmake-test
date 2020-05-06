cmake_minimum_required(VERSION 3.0)

project(CMAKE_TEST)

add_executable(test_cmake ../src/main.cc)

target_compile_featureS(test_cmake PRIVATE cxx_lambda_init_captures)

add_library(
	test
	../src/test.cc
	../include/test.hh
	)

target_link_libraries(test_cmake test)

add_compile_options(-Wall -Wextra -Wpedantic)