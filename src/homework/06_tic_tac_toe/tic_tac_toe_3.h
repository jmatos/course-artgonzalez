#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class TicTacToe3 : public TicTacToe {
    public:
        TicTacToe3() : TicTacToe(3) {}; 
        TicTacToe3(vector<string> p, string winner) : TicTacToe(p, winner){};

    private:
        bool check_diagonal_win();
        bool check_row_win();
        bool check_column_win();
        bool pegs_equal_and_not_space(int pos1, int pos2, int pos3);
};

#endif