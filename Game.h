//
// Created by Danny kim on 5/19/24.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H

#include <vector>
#include "Piece.h"
#include "Tetris.h"

class Game {
public:
    Game();
    void run();
private:
    Tetris tetris;
    bool isRunning;

};


#endif //UNTITLED_GAME_H
