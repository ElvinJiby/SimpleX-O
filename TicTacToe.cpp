#include "TicTacToe.h"
#include <iostream>
#include <string>


TicTacToe::TicTacToe() : board(9, '\0'), isGameActive(true), playerTurn(0) {
    srand(time(nullptr));
}

void TicTacToe::startGame() {
    std::cout << "Game started!" << std::endl;
}
