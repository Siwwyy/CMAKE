cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

option(HELLO_EXE "If you like to use executable hello exe project" OFF)

add_subdirectory(say_hello) #If say_hello is linked into hello_exe, then it should be placed before!
if(HELLO_EXE)
    add_subdirectory(hello_exe)
endif()