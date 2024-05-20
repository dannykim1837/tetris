//
// Created by Danny kim on 5/19/24.
//

#ifndef UNTITLED_BOARD_H
#define UNTITLED_BOARD_H

#include <vector>

class Board {
public:
    Board();
    void draw();
private:
    std::vector<std::vector<int>> grid;
};


#endif //UNTITLED_BOARD_H
