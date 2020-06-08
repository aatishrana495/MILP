cmake_minimum_required(VERSION 2.8.3)
project(milp)

add_definitions(-std=c++11)

include_directories(include)

add_library(milp_lib include/milp/milp.h src/milp.cpp)
