cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Tetris.cpp
        Tetris.h
        Game.cpp
        Game.h
        Board.cpp
        Board.h
        Piece.cpp
        Piece.h)
