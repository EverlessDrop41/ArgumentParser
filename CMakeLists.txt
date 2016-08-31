cmake_minimum_required(VERSION 3.6.1)

include_directories(public)
file(GLOB SOURCES "private/*.cpp")

add_executable(app ${SOURCES} main.cpp)
