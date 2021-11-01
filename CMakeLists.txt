cmake_minimum_required(VERSION 3.21)

# Setting a project
project(C++_Project_Template VERSION 1.0
        DESCRIPTION "C++20 Project Template"
        LANGUAGES CXX)

# set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# conan setup
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Source Code
add_subdirectory(src)
add_subdirectory(docs)

# Unit Test
enable_testing()
add_subdirectory(test)
