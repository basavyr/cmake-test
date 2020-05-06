cmake_minimum_required(VERSION 3.0)
project(TEST_CMAKE)

add_executable(test_cmake ../src/main.cc)

add_library(
	test
	../src/test.cc
	../include/test.hh
	)

target_link_libraries(test_cmake test)

add_compile_options(-Wall)