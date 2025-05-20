cmake_minimum_required(VERSION 3.10)
project(app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-g -O0)

add_executable(app
    AComplexNumberClass.cpp
    complex.cpp
)
