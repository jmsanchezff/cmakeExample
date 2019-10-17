cmake_minimum_required(VERSION 3.14)
project(ducksLibraries)

add_library(ducks STATIC
        Ducks/Duck.h
        Ducks/SimpleDuck.h
        Ducks/SimpleDuck.cpp)

add_library(ducksDecorators STATIC
        DuckDecorators/JumpDuckDecorator.h
        DuckDecorators/JumpDuckDecorator.cpp)

target_include_directories(ducksDecorators
        PUBLIC Ducks)

target_link_libraries(ducksDecorators
        PUBLIC ducks)