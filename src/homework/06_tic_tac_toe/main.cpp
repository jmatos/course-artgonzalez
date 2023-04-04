#include "tic_tac_toe.h"

//return true if player is "X" or "O"
bool validPlayer(string player) {
	return player == "X" || player == "O";
}

//return true if position is 1 thru 9
bool validPosition(int position) {
	return position >= 1 && position <= 9;  
}

int main() 
{
	TicTacToe board;

	bool keep_going = true;
	string player;
	double position;
	auto response = 'Y';

	while (keep_going) {
		cout<<"Enter X or O: ";
		cin>>player;
		if (validPlayer(player)) {
			board.start_game(player);
			while (!board.game_over()) {
				cout<<"Enter a position from 1 to 9: ";
				cin>>position;
				if (validPosition(position)) {
					board.mark_board(position);
					board.display_board();
				} else {
					cout<<"Invalid input!\n";
				}
			}
			cout<<"Game over! The winner is: "<<board.get_winner()<<"\n\n";
			cout<<"New game? Y/N: ";
			cin>>response;
			if (!(response == 'Y' || response == 'y')) {
				keep_going = false;
				cout<<"Exiting...\n\n";
			}
		} else {
			cout<<"Invalid input!\n";
		}		
	}	
	return 0;
}