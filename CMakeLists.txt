cmake_minimum_required(VERSION 3.27)
project(Cpp_Project)

set(CMAKE_CXX_STANDARD 23)

add_executable(Cpp_Project main.cpp
        HookHelpers/ProcessHelper.cpp
        HookHelpers/Headers/ProcessHelper.h
        HookHelpers/HookHelper.cpp
        HookHelpers/Headers/HookHelper.h)
