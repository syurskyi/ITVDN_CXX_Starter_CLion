cmake_minimum_required(VERSION 3.14)
project(002_LocalVariable)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(002_LocalVariable main.cpp)