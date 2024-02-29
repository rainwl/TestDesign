cmake_minimum_required(VERSION 3.28)
project(TestDesign)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestDesign main.cpp
        ILogger.cpp
        ILogger.h
        Logger.cpp
        Logger.h
        Foo.cpp
        Foo.h)
