#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 

std::vector<char> board = {' ',' ',' ',' ',' ',' ', ' ',' ',' '};
int position;
bool start = true;

void introduction(){
	std::cout << "===============================\n";
	std::cout << "Welcome to the tic-tac-toe game\n";
	std::cout << "===============================\n";
  std::cout << "          let's play.          \n";
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

void update_board(int position, int current_player){
    char symbol = (current_player == 1) ? 'X': '0';
    board[position] = symbol;
}

void set_position(int current_player, std::string current_player_name){

 std::cout << "Enter the position player " << current_player_name << " of the tic-tac-toe (1-9): ";
 do{
 if (!(std::cin >> position)) {
     std::cout << "Invalid input! Please enter a number: ";
 }else if(position < 1 || position > 9){
     std::cout << "Invalid position! Please type a number between 1 and 9: ";
  }else if(board[position - 1] != ' '){
    std::cout << "Position already taken! Please choose another position: ";
  }else{
     update_board(position - 1, current_player);
     break;
  }
 }while(true);
}

bool filled_up() {
    for (char cell : board) {
        if (cell == ' ') {
            return false;
        }
    }
    return true;
}

bool is_winner() {
    for (int i = 0; i < 3; i++) {
        if (board[i * 3] != ' ' && board[i * 3] == board[i * 3 + 1] && board[i * 3] == board[i * 3 + 2]) {
            return true; 
        }
    }

    for (int i = 0; i < 3; i++) {
        if (board[i] != ' ' && board[i] == board[i + 3] && board[i] == board[i + 6]) {
            return true; 
        }
    }

    if (board[0] != ' ' && board[0] == board[4] && board[0] == board[8]) {
        return true;
    }
    if (board[2] != ' ' && board[2] == board[4] && board[2] == board[6]) {
        return true; 
    }

    return false; 
}

void make_random_move(int current_player) {
    srand(time(0));

    while (true) {
        int position = rand() % 9;

        if (board[position] == ' ') {
            update_board(position, (current_player == 1) ? 'X' : 'O');
            draw();
            break;
        }
    }
}
