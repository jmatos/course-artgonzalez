#include "tic_tac_toe.h"

int main() 
{
	TicTacToe board;

	bool keep_going = true;
	string first_player;
	int position;
	auto response = 'Y';

	while (keep_going) {
		cout<<"Enter X or O: ";
		cin>>first_player;
		board.start_game(first_player);
		while (!board.game_over()) {
			cout<<"Enter a position from 1 to 9: ";
			cin>>position;
			board.mark_board(position);
			board.display_board();			
		}
		cout<<"Game over\n";
		cout<<"New game? Y/N: ";
		cin>>response;
		if (!(response == 'Y' || response == 'y')) {
			keep_going = false;
			cout<<"Exiting...\n\n";
		}		
	}	
	return 0;
}