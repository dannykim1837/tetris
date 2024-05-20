//
// Created by Danny kim on 5/19/24.
//

#ifndef UNTITLED_TETRIS_H
#define UNTITLED_TETRIS_H

#include "Piece.h"
#include "Board.h"

class Tetris {
public:
    Tetris();
    void update();
    void render();
private:
    Board board;
    Piece currentPiece;
};


#endif //UNTITLED_TETRIS_H
