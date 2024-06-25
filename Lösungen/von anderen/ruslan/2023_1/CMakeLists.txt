cmake_minimum_required(VERSION 3.26)
project(2023_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(2023_1 main.cpp
        Concert.cpp
        RoosterSong.cpp
        IAnimalSong.cpp
        DogSong.cpp
        CatSong.cpp)
