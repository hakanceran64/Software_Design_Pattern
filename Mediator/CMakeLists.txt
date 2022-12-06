cmake_minimum_required(VERSION 3.24)
project(Mediator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mediator src/main.cpp src/Oda.cpp include/Oda.h src/YazilimOdasi.cpp include/YazilimOdasi.h src/Katilimci.cpp include/Katilimci.h src/Moderator.cpp include/Moderator.h src/NormalKatilimci.cpp include/NormalKatilimci.h)
