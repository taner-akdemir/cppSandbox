cmake_minimum_required(VERSION 3.31)
project(abc)

set(CMAKE_CXX_STANDARD 17)

add_executable(abc main.cpp
        src/car/Car.h
        src/car/Car.cpp
        src/bank/Bank.h
        src/bank/Bank.cpp
        src/bank/akbank/Akbank.h
        src/bank/akbank/Akbank.cpp)
