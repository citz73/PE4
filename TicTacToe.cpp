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
std::vector<std::vector<int>> PlaceMarker(std::vector<std::vector<int>> board, std::vector<int> location, int marker) {
	board[location[0]][location[1]] = marker;
	return board;
}



int main() {
    std::vector<std::vector<int>> board = createBoard();
    int turns = 9;
    std::vector<int> player {1,2};
    while(turns != 0) {
        std::vector<int> choice_picked = GetPlayerChoice();
        board = PlaceMarker(board, choice_picked, player[turns%2]);
        DisplayBoard(board);
        turns--;
    }
    
}
