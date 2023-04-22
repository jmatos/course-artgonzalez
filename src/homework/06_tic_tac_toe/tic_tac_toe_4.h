#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe {
    public:
        TicTacToe4() : TicTacToe(4) {}; 

    private:
        bool check_diagonal_win();
        bool check_row_win();
        bool check_column_win();
        bool pegs_equal_and_not_space(int pos1, int pos2, int pos3, int pos4);
};

#endif