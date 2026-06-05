cmake_minimum_required(VERSION 3.20)
project(MathSnake CXX)
set(CMAKE_CXX_STANDARD 17)

set(RAYLIB_WIN /home/skreinek/raylib-5.0_win64_mingw-w64)

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

target_include_directories(MathSnake PRIVATE ${RAYLIB_WIN}/include)
target_link_libraries(MathSnake
        ${RAYLIB_WIN}/lib/libraylib.a
        -static-libgcc -static-libstdc++
        -lwinmm -lgdi32 -lopengl32)