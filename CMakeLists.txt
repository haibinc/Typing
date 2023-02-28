cmake_minimum_required(VERSION 3.23)
project(Typing_SFML)

set(CMAKE_CXX_STANDARD 14)

add_executable(Typing_SFML main.cpp ResourceHandler.cpp ResourceHandler.h ResourceHolder.h Typing.cpp Typing.h)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Typing_SFML sfml-system sfml-window sfml-graphics sfml-audio sfml-network)