#include <iostream>
#include <vector>


std::vector<std::vector<int>> createBoard() {
    std::vector<std::vector<int>> board {{0,0,0}, {0,0,0}, {0,0,0}};
    return board;
}
void DisplayBoard(std::vector<std::vector<int>> board) {
    int boardsize = board.size();
    std::cout << boardsize << std::endl;
    for(int i=0; i <boardsize; i++) {
    for(int j=0; j<boardsize; j++){
    std::cout<<board[i][j];
    }
    std::cout<<"\n";
    }
}


int main() {
    std::vector<std::vector<int>> board = createBoard();
    DisplayBoard(board);
    
}