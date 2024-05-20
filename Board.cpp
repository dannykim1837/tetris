//
// Created by Danny kim on 5/19/24.
//

#include "Board.h"
#include <iostream>


Board::Board() : grid(20, std::vector<int>(10, 0)) {}

void Board::draw() {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            std::cout << (cell ? "#" : ".") << " ";
        }
        std::cout << std::endl;
    }
}