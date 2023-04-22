#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

void displayGameTotals(TicTacToeManager manager) {
	int o = 0;
	int x = 0;
	int t = 0;

	manager.get_winner_total(o, x, t);

	cout<<"O wins: "<<o<<"\n";
	cout<<"X wins: "<<x<<"\n";
	cout<<"TIES: "<<t<<"\n";
}

int main() 
{
	TicTacToeManager manager;	
	unique_ptr<TicTacToe> game;
	
	int gameType;

	do {
		cout<<"Please enter pick your TicTacToe game type (3x3 or 4x4)\n";
		cout<<"Enter 3 or 4:";
		cin>>gameType;

		if (gameType == 3) {
			game = make_unique<TicTacToe3>();
		} else if (gameType == 4) {
			game = make_unique<TicTacToe4>();
		}
	} while (gameType != 3 && gameType != 4);
	

	bool keep_going = true;
	string player;
	auto response = 'Y';

	while (keep_going) {
		cout<<"Enter X or O: ";
		cin>>player;
		if (player == "X" || player == "O") {
			game->start_game(player);
			while (!game->game_over()) {
				cin>>*game;
				cout<<*game;
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

	cout<<"Board History\n\n";
	cout<<manager;
	displayGameTotals(manager);

	return 0;
}