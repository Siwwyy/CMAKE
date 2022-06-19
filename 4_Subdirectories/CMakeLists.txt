cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

add_subdirectory(say_hello) #If say_hello is linked into hello_exe, then it should be placed before!
add_subdirectory(hello_exe)
