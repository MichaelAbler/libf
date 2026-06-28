cmake_minimum_required(VERSION 3.10)

project(libf LANGUAGES CXX)

add_library(libf SHARED libf.cpp)

target_include_directories(libf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

