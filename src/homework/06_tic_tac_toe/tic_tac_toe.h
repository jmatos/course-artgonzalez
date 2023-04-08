#include<string>
#include<vector>
#include<iostream>

using std::string;
using std::vector;
using std::cout;
using std::cin;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe {

    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        string get_winner();

    private:
        string player;
        string winner;
        vector<string> pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

        void set_next_player();
        void set_winner();
        void clear_board();        
        bool check_board_full();
        bool check_diagonal_win();
        bool check_row_win();
        bool check_column_win();
        bool pegs_equal_and_not_space(int pos1, int pos2, int pos3);
};
#endif