#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Test Game over if 9 slots selected") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == false);

	board.mark_board(4);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(6);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == false);

	board.mark_board(8);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}

TEST_CASE("Test first player set to X") {
	TicTacToe board;

	board.start_game("X");

	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test first player set to O") {
	TicTacToe board;

	board.start_game("O");

	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by first column") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(4);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == false);

	board.mark_board(7);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by second column") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(6);
	REQUIRE(board.game_over() == false);

	board.mark_board(8);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by third column") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(3);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(6);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by first row") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(4);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by second row") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(4);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == false);

	board.mark_board(6);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win by third row") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(8);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left") {

	TicTacToe board;

	board.start_game("X");

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager") {

	TicTacToeManager manager;
	TicTacToe board;

	//X is the winner
	board.start_game("X");

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");

	manager.save_game(board);

	//O is the winner
	board.start_game("O");

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(3);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");

	manager.save_game(board);

	//Tie game
	board.start_game("O");

	board.mark_board(3);
	REQUIRE(board.game_over() == false);

	board.mark_board(2);
	REQUIRE(board.game_over() == false);

	board.mark_board(5);
	REQUIRE(board.game_over() == false);

	board.mark_board(1);
	REQUIRE(board.game_over() == false);

	board.mark_board(8);
	REQUIRE(board.game_over() == false);

	board.mark_board(7);
	REQUIRE(board.game_over() == false);

	board.mark_board(4);
	REQUIRE(board.game_over() == false);

	board.mark_board(6);
	REQUIRE(board.game_over() == false);

	board.mark_board(9);
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");

	manager.save_game(board);

	//Validate TicTacToeManager.get_winner_total
	int o = 0;
	int x = 0;
	int t = 0;
	
	manager.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}