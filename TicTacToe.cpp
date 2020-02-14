#include <iostream>
#include <vector>


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

std::vector<std::vector<int>> PlaceMarker(std::vector<std::vector<int>> board, std::vector<int> location, int marker) {
	board[location[0]][location[1]] = marker;
	return board;
}



int main() {
    std::vector<std::vector<int>> board = createBoard();
    DisplayBoard(board);
}
