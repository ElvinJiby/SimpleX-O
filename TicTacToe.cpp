#include "TicTacToe.h"
#include <iostream>
#include <string>


TicTacToe::TicTacToe() : board(9, '\0'), isGameActive(true), playerTurn(0) {
    srand(time(nullptr));
}

void TicTacToe::startGame() {
    std::cout << "Game started!" << std::endl;
    printStartScreen();

    while (isGameActive) {
//        clearScreen();
        printBoard();
        spaceSelection(playerTurn);
        playerTurn = (playerTurn == 1) ? 0 : 1;
        spaceSelection(playerTurn);
        isGameActive = checkResult();
    }
//    clearScreen();
    printBoard();
    printGameOverScreen();
    system("pause");
}

void TicTacToe::clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void TicTacToe::printStartScreen() {
    std::cout << "Start Screen\n";
}

void TicTacToe::printGameOverScreen() {
    std::cout << "Game Over Screen\n";
}

void TicTacToe::printBoard() {
    std::cout << "Board\n";
}

void TicTacToe::spaceSelection(int playerTurn) {
    std::cout << "Player turn: " << playerTurn << ".\n";
}

bool TicTacToe::checkResult() {
    return false;
}