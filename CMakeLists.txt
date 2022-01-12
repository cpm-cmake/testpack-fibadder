cmake_minimum_required(VERSION 3.14)

project(fibadder)

include(./get_cpm.cmake)

CPMAddPackage("gh:cpm-cmake/testpack-adder@1.0.1")
CPMAddPackage("gh:cpm-cmake/testpack-fibonacci@2.0")


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
