cmake_minimum_required(VERSION 3.28)
project(operatorOverloading)

set(CMAKE_CXX_STANDARD 17)

add_executable(operatorOverloading main.cpp
        Coordinate/Coord.cpp
        Coordinate/Coord.h
        Deposit/Deposit.cpp
        Deposit/Deposit.h
        Matrix/Matrix.cpp
        Matrix/Matrix.h
        Pass/Password.cpp
        Pass/Password.h
        RGB/RGB.cpp
        RGB/RGB.h
        Time/TIME.cpp
        Time/TIME.h
        Timer/TIMER.cpp
        Timer/TIMER.h
)
