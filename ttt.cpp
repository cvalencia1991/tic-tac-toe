#include <iostream>
#include <vector>
#include "ttp_function.hpp"

int main(){
	int current_player = 1;
	std::string player1, player2;

	introduction();
	draw();

	std::cout << "\nEnter name player_1: \n";
	std::cin >> player1;
	std::cout << "\nEnter name player_2: \n";
	std::cin >> player2;
	std::cout << "Which player starts? Enter 1 for " << player1 << " or 2 for " << player2 << ": \n";
	std::cin >> current_player;
	std::string current_player_name = (current_player == 1) ? player1 : player2;

	while(true){
		set_position(current_player);
		draw();
		if (is_winner()){
		std::cout << "Congratulations! " << current_player_name << " wins!\n";
		break;
	}
	if(filled_up()){
		std::cout << "It's a tie!\n";
		break;
	}
		current_player = (current_player == 1) ? 2 : 1;
	}
}
