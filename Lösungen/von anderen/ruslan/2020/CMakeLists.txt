cmake_minimum_required(VERSION 3.26)
project(2020)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        2020
        main.cpp
        PlayerA.cpp
        IPlayer.cpp
        PlayerB.cpp
        helpers.cpp
)
