#include <vector>
#include <string>

class TicTacToe {
private:
    std::vector<char> board;
    bool isGameActive;
    int playerTurn;

public:
    TicTacToe(); // Constructor
    void startGame(); // Function to start the game

private:
    static void clearScreen();
    static void printStartScreen();
    static void printGameOverScreen();
    static void printBoard();
    static void spaceSelection(int playerTurn);
    static bool checkResult();
};