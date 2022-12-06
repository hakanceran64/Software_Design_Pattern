cmake_minimum_required(VERSION 3.24)
project(Visitor)

set(CMAKE_CXX_STANDARD 14)

add_executable(Visitor src/main.cpp include/IVisitor.h src/StatefullVisitor.cpp include/StatefullVisitor.h src/ControlsVisitor.cpp include/ControlsVisitor.h src/Control.cpp include/Control.h)
