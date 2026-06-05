cmake_minimum_required(VERSION 3.20)
project(MathSnake CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

# Używamy zmiennej SOURCES zamiast wpisywania nazw ręcznie
add_executable(MathSnake
        main.cpp
        cpp/Game.cpp
        headers/Game.h
        headers/Window.h
        cpp/Entity.cpp
        headers/Entity.h
        cpp/Snake.cpp
        headers/Snake.h
        cpp/Apple.cpp
        headers/Apple.h
        cpp/Grid.cpp
        headers/Grid.h
        cpp/UI.cpp
        headers/UI.h
        headers/Button.h
        cpp/Button.cpp)

target_link_libraries(MathSnake raylib m pthread dl rt X11)
