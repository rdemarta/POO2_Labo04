cmake_minimum_required(VERSION 3.14.3)
project(POO2_Labo04)

set(CMAKE_CXX_STANDARD 11)

add_executable(POO2_Labo04 main.cpp Displayer.cpp Displayer.hpp Field.cpp Field.hpp Humanoid.cpp Humanoid.hpp Human.cpp Human.hpp Vampire.cpp Vampire.hpp Buffy.cpp Buffy.hpp Action.cpp Action.hpp ChaseHumanoidAction.cpp ChaseHumanoidAction.hpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wconversion -Wextra -pedantic")