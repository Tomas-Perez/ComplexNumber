cmake_minimum_required(VERSION 3.6)
project(ComplexNumber)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c ComplexNumber.c ComplexNumber.h)
add_executable(ComplexNumber ${SOURCE_FILES} ComplexNumber.c ComplexNumber.h)