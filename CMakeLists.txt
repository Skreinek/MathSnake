cmake_minimum_required(VERSION 3.20)
project(MathSnake CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

# AUTOMATYZACJA: Znajdź wszystkie pliki .cpp w bieżącym folderze
file(GLOB SOURCES *.cpp)

# Używamy zmiennej SOURCES zamiast wpisywania nazw ręcznie
add_executable(MathSnake ${SOURCES}
        Game.cpp
        Game.h
        Window.h
        Entity.cpp
        Entity.h
        Snake.cpp
        Snake.h
        Apple.cpp
        Apple.h
        Grid.cpp
        Grid.h
        UI.cpp
        UI.h)

target_link_libraries(MathSnake raylib m pthread dl rt X11)
