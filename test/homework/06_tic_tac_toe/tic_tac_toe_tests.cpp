#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

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
}