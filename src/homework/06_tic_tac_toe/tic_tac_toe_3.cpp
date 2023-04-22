#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win() {
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


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win() {
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


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win() {

    if (pegs_equal_and_not_space(1, 5, 9)) {
        return true;
    }

    if (pegs_equal_and_not_space(3, 5, 7)) {
        return true;
    }    

    return false;
};

bool TicTacToe3::pegs_equal_and_not_space(int pos1, int pos2, int pos3) {
    if (pegs[pos1-1] == pegs[pos2-1] && 
        pegs[pos2-1] == pegs[pos3-1]) {
        if (pegs[pos1-1] != " ") {
            return true;
        }
    }
    return false;
};