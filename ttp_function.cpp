#include <iostream>
#include <vector>


std::vector<char> board = {' ',' ',' ',' ',' ',' ', ' ',' ',' '};
std::string player1, player2;


void introduction(){
	std::cout << "===============================\n";
	std::cout << "Welcome to the tic tac toe game\n";
	std::cout << "===============================\n";
	std::cout << "\nEnter name player_1: \n";
	std::cin >> player1;
	std::cout << "\nEnter name player_2: \n";
	std::cin >> player2;
}

void draw() {

    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";
}	
