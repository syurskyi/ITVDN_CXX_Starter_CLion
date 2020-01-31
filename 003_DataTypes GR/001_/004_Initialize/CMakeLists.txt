cmake_minimum_required(VERSION 3.14)
project(004_Initialize)

set(CMAKE_CXX_STANDARD 14)

list(APPEND _sources stdafx.cpp stdafx.h targetver.h)
add_executable(004_Initialize main.cpp)