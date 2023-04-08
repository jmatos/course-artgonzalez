#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

void displayGameTotals(TicTacToeManager manager) {
	int o = 0;
	int x = 0;
	int t = 0;

	manager.get_winner_total(o, x, t);

	cout<<"O wins: "<<o;
	cout<<"X wins: "<<x;
	cout<<"TIES: "<<t;
}

int main() 
{
	TicTacToeManager manager;
	TicTacToe game;

	bool keep_going = true;
	string player;
	auto response = 'Y';

	while (keep_going) {
		cout<<"Enter X or O: ";
		cin>>player;
		if (player == "X" || player == "O") {
			game.start_game(player);
			while (!game.game_over()) {
				cin>>game;
				cout<<game;
			}
			manager.save_game(game);
			cout<<"Game over!\n\n";
			
			displayGameTotals(manager);

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

	cout<<manager<<"\n\n";
	displayGameTotals(manager);

	return 0;
}