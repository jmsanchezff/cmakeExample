cmake_minimum_required(VERSION 3.14)
project(ducksSuperProgram)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../DucksLibraries ducksLibraries)

add_executable(ducksSuperProgram main.cpp)

target_include_directories(ducksSuperProgram
        PUBLIC ../DucksLibraries/Ducks
        PUBLIC ../DucksLibraries/DuckDecorators)

target_link_libraries(ducksSuperProgram
        PRIVATE ducksDecorators
        PRIVATE ducks)