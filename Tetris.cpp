//
// Created by Danny kim on 5/19/24.
//
#include "Tetris.h"
#include <iostream>

Tetris::Tetris() : board(), currentPiece() {}

void Tetris::update() {
    // 여기에서 게임 로직을 업데이트
}

void Tetris::render() {
    board.draw();
}
