#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData {
    public:
        void save_games(const vector<unique_ptr<TicTacToe>>& games);
        vector<unique_ptr<TicTacToe>> get_games();
    private: 
        const string file_name{"tictactoe.dat"};
 };

#endif