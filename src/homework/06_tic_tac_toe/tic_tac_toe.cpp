#include "tic_tac_toe.h"

//private functions
void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
};

bool TicTacToe::check_board_full() {
    bool result = true;
    for (string peg: pegs) {
        if (peg == " ") {
            result = false;
        }
    }
    return result;
};

void TicTacToe::clear_board() {
    pegs.assign(pegs.size(), " ");
};

//public functions

bool TicTacToe::game_over() {
    if (check_row_win() || check_column_win() || check_diagonal_win()) {
        set_winner();
        return true;
    }
    
    if (check_board_full()) {
        winner = "C";
        clear_board();
        return true;
    }

    return false;
};

void TicTacToe::start_game(string first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player;
        clear_board();
    }
};

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
};

string TicTacToe::get_player() const {
    return player;
};

bool TicTacToe::check_diagonal_win() {
    return false;
};

bool TicTacToe::check_row_win() {
    return false;
};

bool TicTacToe::check_column_win() {
    return false;
};

void TicTacToe::set_winner() {
    if (player == "X") {
        winner = "O";
    } else {
        winner = "X";
    }
};

string TicTacToe::get_winner() {
    return winner;
};

ostream& operator<<(ostream& out, const TicTacToe& game)
{
    int counter = 1;
    int columns = game.pegs.size() == 9 ? 3 : 4;
    for (string peg: game.pegs) {
        out<<peg;
        if (counter % columns == 0) {
            out<<"\n";
        } else {
            out<<"|";
        }
        counter++;
    }
    return out;
};

istream& operator>>(istream& in, TicTacToe& game) {
    int position;
    int size = game.pegs.size();
    cout<<"Enter a position from 1 to "<<size<<": ";
    in>>position;
    if (position >= 1 && position <= size) {
        game.mark_board(position);
    } else {
        cout<<"Invalid input!\n";
    }
    return in;
};
