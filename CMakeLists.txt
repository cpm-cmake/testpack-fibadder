cmake_minimum_required(VERSION 3.14)

project(fibadder)

CPMAddPackage(
  NAME adder
  GIT_REPOSITORY ../testpack-adder.git
  GIT_TAG v1.0.1
)

CPMAddPackage(
  NAME fibonacci
  GIT_REPOSITORY ../testpack-fibonacci.git
  GIT_TAG v2.0
)

add_library(fibadder STATIC
    code/fibadder/fibadder.hpp
    code/fibadder/fibadder.cpp
 )

target_include_directories(fibadder INTERFACE code)

target_link_libraries(fibadder PUBLIC adder fibonacci)

option(FIBADDER_BUILD_TESTS "Adder: build tests" ON)

if(ADDER_BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
