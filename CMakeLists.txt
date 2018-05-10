cmake_minimum_required(VERSION 3.9)
project(hw2 C)

set(CMAKE_C_STANDARD 99)

add_executable(hw2 main.c User.c SocialNetwork.c User.h SocialNetwork.h defs.h)