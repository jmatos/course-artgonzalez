#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
1, 2,  3,  4 
5, 6,  7,  8 
9, 10, 11, 12 
13,14, 15, 16 
else
false
*/
bool TicTacToe4::check_column_win() {
    if (pegs_equal_and_not_space(1, 5, 9, 13)) {
        return true;
    }

    if (pegs_equal_and_not_space(2, 6, 10, 14)) {
        return true;
    }

    if (pegs_equal_and_not_space(3, 7, 11, 15)) {
        return true;
    }

    if (pegs_equal_and_not_space(4, 8, 12, 16)) {
        return true;
    }

    return false;
};



/*
class function check_row_win
Win by row if
1, 2,  3,  4 
5, 6,  7,  8 
9, 10, 11, 12 
13,14, 15, 16 
*/
bool TicTacToe4::check_row_win() {
    if (pegs_equal_and_not_space(1, 2, 3, 4)) {
        return true;
    }

    if (pegs_equal_and_not_space(5, 6, 7, 8)) {
        return true;
    }

    if (pegs_equal_and_not_space(9, 10, 11, 12)) {
        return true;
    }

    if (pegs_equal_and_not_space(13, 14, 15, 16)) {
        return true;
    }

    return false;
};


/*
class function check_diagonal_win
Win diagonally
1, 2,  3,  4 
5, 6,  7,  8 
9, 10, 11, 12 
13,14, 15, 16 

*/
bool TicTacToe4::check_diagonal_win() {

    if (pegs_equal_and_not_space(1, 5, 11, 16)) {
        return true;
    }

    if (pegs_equal_and_not_space(4, 7, 10, 13)) {
        return true;
    }    

    return false;
};

bool TicTacToe4::pegs_equal_and_not_space(int pos1, int pos2, int pos3, int pos4) {
    if (pegs[pos1-1] == pegs[pos2-1] && 
        pegs[pos2-1] == pegs[pos3-1] && 
        pegs[pos3-1] == pegs[pos4-1]) {
        if (pegs[pos1-1] != " ") {
            return true;
        }
    }
    return false;
};