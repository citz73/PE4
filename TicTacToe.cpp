#include <iostream>
#include <vector>


std::vector<std::vector<int>> createBoard() {
    std::vector<std::vector<int>> board {{0,0,0}, {0,0,0}, {0,0,0}};
    return board;
}


int main() {
    std::vector<std::vector<int>> board = createBoard();
}