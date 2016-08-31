cmake_minimum_required(VERSION 3.6.1)

set (CMAKE_CXX_STANDARD 11)

include_directories(public)
file(GLOB SOURCES "private/*.cpp")

add_executable(app ${SOURCES} main.cpp)
