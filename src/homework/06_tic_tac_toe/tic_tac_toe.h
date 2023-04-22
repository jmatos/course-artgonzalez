#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::string;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::vector;
using std::unique_ptr;
using std::move;
using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe {    
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);    

    public:        
        TicTacToe(int size) : pegs(size*size, " ") {};
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        string get_winner();                

    protected:
        vector<string> pegs;
        virtual bool check_diagonal_win();
        virtual bool check_row_win();
        virtual bool check_column_win();

    private:
        string player;
        string winner;        
        void set_next_player();
        void set_winner();
        void clear_board();        
        bool check_board_full();   
};
#endif