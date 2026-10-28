cmake_minimum_required(VERSION 4.3)
project(test_sfml)

set(CMAKE_CXX_STANDARD 23)

find_package(SFML COMPONENTS Graphics CONFIG REQUIRED)
add_executable(test_sfml main.cpp
        game.cpp
        game.h)
target_link_libraries(test_sfml PUBLIC SFML::Graphics)

