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
};