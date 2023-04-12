cmake_minimum_required(VERSION 3.22)
project(Arithmetic)

set(CMAKE_CXX_STANDARD 14)

add_executable(Arithmetic main.cpp MathExpression.cpp MathExpression.h Infix.cpp Infix.h)
