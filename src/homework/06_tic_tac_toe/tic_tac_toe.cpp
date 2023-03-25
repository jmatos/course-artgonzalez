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
    pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
};

//public functions

bool TicTacToe::game_over() {
    bool result = check_board_full();
    if (result) {
        clear_board();
    }
    return result;
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

void TicTacToe::display_board() const {
    int counter = 1;
    for (string peg: pegs) {
        cout<<peg;
        if (counter % 3 == 0) {
            cout<<"\n";
        } else {
            cout<<"|";
        }
        counter++;
    }
};
