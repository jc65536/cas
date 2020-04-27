cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(CAS)

add_executable(cas src/Constant.cpp src/main.cpp src/Numbers.cpp include/Numbers.h include/Exceptions.h)
