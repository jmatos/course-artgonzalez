#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game) {
    update_winner_count(game->get_winner());
    games.push_back(move(game));    
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t) {
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner) {
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else {
        ties++;
    }
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager) {
    for (auto& game: manager.games) {
        out<<*game<<"\n";
    }
    return out;
}