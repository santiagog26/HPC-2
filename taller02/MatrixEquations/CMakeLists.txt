cmake_minimum_required(VERSION 3.5)

project(MatrixEquations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Ingreso de PATH para biblioteca externas
include_directories("usr/local/include/eigen3")

add_executable(MatrixEquations main.cpp)
