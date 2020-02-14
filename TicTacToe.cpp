#include <iostream>
#include <vector>
#include <string>


std::vector<std::vector<int>> createBoard() {
    std::vector<std::vector<int>> board {{0,0,0}, {0,0,0}, {0,0,0}};
    return board;
}



void DisplayBoard(std::vector<std::vector<int>> board) {
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

std::vector<int> GetPlayerChoice() {
    int row;
    int col;
    std::cout << "row number:";
    std::cin >> row;
    std::cout << "column number:";
    std::cin >> col;
    std::vector<int> loc{row, col};
    return loc;
}

int main() {
    std::vector<std::vector<int>> board = createBoard();
    DisplayBoard(board);
    GetPlayerChoice();
    
}
