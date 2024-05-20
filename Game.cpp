//
// Created by Danny kim on 5/19/24.
//

#include "Game.h"
#include <iostream>
#include <chrono>
#include <thread>

Game::Game() : isRunning(true), tetris() {}

void Game::run() {
    while (isRunning) {
        tetris.update();
        tetris.render();
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // 0.5초 대기
    }
}