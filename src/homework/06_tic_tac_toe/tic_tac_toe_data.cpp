#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>> &games) {
    ofstream out_file;
    out_file.open(file_name);

    for (auto &game : games) {
        for (auto ch : game->get_pegs()) {
            out_file<<ch;
        }
        out_file<<game->get_winner() << "/n";
    }
    out_file.close();
};

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games() {
    vector<unique_ptr<TicTacToe>> games;

    ifstream read_file;
    read_file.open(file_name);

    string line;
    vector<string> pegs;

    while (getline(read_file, line)) {
        for (auto &ch : line) {
            pegs.push_back(string(1, ch));
        }
        string winner = pegs[pegs.size() - 1];

        unique_ptr<TicTacToe> game;

        if (pegs.size() == 9) {
            game = make_unique<TicTacToe3>(pegs, winner);
        }
        else if (pegs.size() == 16) {
            game = make_unique<TicTacToe4>(pegs, winner);
        }

        games.push_back(move(game));
    }
    read_file.close();
    return games;
};