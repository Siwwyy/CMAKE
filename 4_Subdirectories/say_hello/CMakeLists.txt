cmake_minimum_required(VERSION 3.12)

add_library(say_hello
    src/say_hello/head.cpp
    src/say_hello/head.hpp
)

target_include_directories(say_hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_compile_definitions(say_hello PUBLIC SAY_HELLO_VERSION=4)    #propagates SAY_HELLO_VERSION preprocessor definition to everyone who links that lib (lib and consumers of that lib)
#target_compile_definitions(say_hello PRIVATE SAY_HELLO_VERSION=4)   #available only in say_hello lib files (only lib)
#target_compile_definitions(say_hello INTERFACE SAY_HELLO_VERSION=4)  #available only in everyone who links that lib (only consumers of that lib)
