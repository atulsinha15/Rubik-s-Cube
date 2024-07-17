cmake_minimum_required(VERSION 3.28)
project(Rubik_c_cube_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubik_c_cube_solver main.cpp
        Model/generic_rubiks_cube.cpp
        Model/generic_rubiks_cube.h
        Model/RubiksCube3dArray.cpp
        Model/RubiksCube1dArray.cpp
        Model/RubiksCubeBitboard.cpp)
