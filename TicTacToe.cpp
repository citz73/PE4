#include <iostream>

int** createBoard() {
    int boardsize = 3;
    int** board_[boardsize][boardsize];
    return board_[boardsize][boardsize];
}

int main() {
    int** generated = createBoard();
    std::cout << generated << std::endl;
}