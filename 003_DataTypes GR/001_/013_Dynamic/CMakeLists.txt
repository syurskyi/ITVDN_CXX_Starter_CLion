cmake_minimum_required(VERSION 3.14)
project(013_Dynamic)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(013_Dynamic main.cpp)