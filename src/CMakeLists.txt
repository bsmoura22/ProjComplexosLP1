cmake_minimum_required(VERSION 3.5)


set(CMAKE_CXX FLAGS "-Wall -pedantic")
set(CMAKE_CXX_STANDARD 11)


project(COMPLEXO VERSION 1.0 LANGUAGES CXX)


include_directories("src" "include") 

add_executable(COMPLEXO main.cpp complexo.cpp)