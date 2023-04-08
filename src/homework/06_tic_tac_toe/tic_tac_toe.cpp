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

bool TicTacToe::pegs_equal_and_not_space(int pos1, int pos2, int pos3) {
    if (pegs[pos1-1] == pegs[pos2-1] && pegs[pos2-1] == pegs[pos3-1]) {
        if (pegs[pos1-1] != " ") {
            return true;
        }
    }
    return false;
};

bool TicTacToe::check_diagonal_win() {

    if (pegs_equal_and_not_space(1, 5, 9)) {
        return true;
    }

    if (pegs_equal_and_not_space(3, 5, 7)) {
        return true;
    }    

    return false;
};

bool TicTacToe::check_row_win() {
    if (pegs_equal_and_not_space(1, 2, 3)) {
        return true;
    }

    if (pegs_equal_and_not_space(4, 5, 6)) {
        return true;
    }

    if (pegs_equal_and_not_space(7, 8, 9)) {
        return true;
    }

    return false;
};

bool TicTacToe::check_column_win() {
    if (pegs_equal_and_not_space(1, 4, 7)) {
        return true;
    }

    if (pegs_equal_and_not_space(2, 5, 8)) {
        return true;
    }

    if (pegs_equal_and_not_space(3, 6, 9)) {
        return true;
    }

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

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int counter = 1;
    for (string peg: game.pegs) {
        out<<peg;
        if (counter % 3 == 0) {
            out<<"\n";
        } else {
            out<<"|";
        }
        counter++;
    }
    return out;
};

std::istream& operator>>(std::istream& in, TicTacToe& game) {
    int position;
    cout<<"Enter a position from 1 to 9: ";
    in>>position;
    if (position >= 1 && position <= 9) {
        game.mark_board(position);        
    } else {
        cout<<"Invalid input!\n";
    }
    return in;
};

