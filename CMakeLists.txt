cmake_minimum_required(VERSION 3.28)
project(Rubik_c_cube_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubik_c_cube_solver main.cpp
        generic_rubiks_cube.cpp
        generic_rubiks_cube.h
        RubiksCube3dArray.cpp
        RubiksCube1dArray.cpp
        RubiksCubeBitboard.cpp)
