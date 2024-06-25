cmake_minimum_required(VERSION 3.26)
project(2023_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(include/Race)
include_directories(include/Animal)
include_directories(include/Rabbit)
include_directories(include/Turtle)

add_executable(2023_2 main.cpp
        include/Animal.h
        src/Animal.cpp
        include/Race.h
        src/Race.cpp
        src/helpers.cpp
        include/Rabbit.h
        src/Rabbit.cpp
        include/Turtle.h
        src/Turtle.cpp)
