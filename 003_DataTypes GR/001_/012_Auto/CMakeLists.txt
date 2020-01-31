cmake_minimum_required(VERSION 3.14)
project(012_Auto)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(012_Auto main.cpp)