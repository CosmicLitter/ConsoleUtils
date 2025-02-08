cmake_minimum_required(VERSION 3.16)
project(ConsoleUtils 
  VERSION 0.0.1
  DESCRIPTION "Useful utilities for displaying standard output"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

if (BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()
