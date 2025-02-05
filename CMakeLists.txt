cmake_minimum_required(VERSION 3.16)
project(ConsoleUtils 
  VERSION 0.0.1
  DESCRIPTION "Useful utilities for displaying standard output"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

# target_include_directories(console_utils PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
# )

if (BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

add_executable(main src/main.cpp)

# install (TARGETS console_utils
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )
#
# install(DIRECTORY include/ DESTINATION include)
