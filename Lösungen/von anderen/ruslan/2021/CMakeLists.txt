cmake_minimum_required(VERSION 3.26)
project(2021)

set(CMAKE_CXX_STANDARD 17)

add_executable(2021 main.cpp
        world.h
        world.cpp
        field.h
        field.cpp
        RecurringField.h
        RecurringField.cpp
        PlainField.h
        PlainField.cpp
        helpers.h
        helpers.h
        helpers.cpp)
