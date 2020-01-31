cmake_minimum_required(VERSION 3.14)
project(010_CastingExpression)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(010_CastingExpression main.cpp)