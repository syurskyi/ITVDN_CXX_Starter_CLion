cmake_minimum_required(VERSION 3.14)
project(011_Auto)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(011_Auto main.cpp)