#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Test Game over if 9 slots selected") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(3);
	REQUIRE(board->game_over() == false);

	board->mark_board(4);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(7);
	REQUIRE(board->game_over() == false);

	board->mark_board(6);
	REQUIRE(board->game_over() == false);

	board->mark_board(9);
	REQUIRE(board->game_over() == false);

	board->mark_board(8);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "C");
}



TEST_CASE("Test first player set to X") {
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	REQUIRE(board->get_player() == "X");
}

TEST_CASE("Test first player set to O") {
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("O");

	REQUIRE(board->get_player() == "O");
}

TEST_CASE("Test win by first column") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(4);
	REQUIRE(board->game_over() == false);

	board->mark_board(3);
	REQUIRE(board->game_over() == false);

	board->mark_board(7);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by second column") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(6);
	REQUIRE(board->game_over() == false);

	board->mark_board(8);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}


TEST_CASE("Test win by third column") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(3);
	REQUIRE(board->game_over() == false);

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(6);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(9);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by first row") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(4);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(3);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by second row") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(4);
	REQUIRE(board->game_over() == false);

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(9);
	REQUIRE(board->game_over() == false);

	board->mark_board(6);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}



TEST_CASE("Test win by third row") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(7);
	REQUIRE(board->game_over() == false);

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(8);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(9);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}


TEST_CASE("Test win diagonally from top left") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(3);
	REQUIRE(board->game_over() == false);

	board->mark_board(9);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}



TEST_CASE("Test win diagonally from bottom left") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");

	board->mark_board(7);
	REQUIRE(board->game_over() == false);

	board->mark_board(2);
	REQUIRE(board->game_over() == false);

	board->mark_board(5);
	REQUIRE(board->game_over() == false);

	board->mark_board(1);
	REQUIRE(board->game_over() == false);

	board->mark_board(3);
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

// TEST_CASE("TicTacToe3: Test TicTacToeManager") {

// 	TicTacToeManager manager;
// 	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

// 	//X is the winner
// 	board->start_game("X");

// 	board->mark_board(7);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(2);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(5);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(1);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(3);
// 	REQUIRE(board->game_over() == true);

// 	REQUIRE(board->get_winner() == "X");

// 	manager.save_game(board);

// 	//O is the winner
// 	board->start_game("O");

// 	board->mark_board(7);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(2);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(5);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(1);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(3);
// 	REQUIRE(board->game_over() == true);

// 	REQUIRE(board->get_winner() == "O");

// 	manager.save_game(board);

// 	//Tie game
// 	board->start_game("O");

// 	board->mark_board(3);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(2);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(5);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(1);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(8);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(7);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(4);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(6);
// 	REQUIRE(board->game_over() == false);

// 	board->mark_board(9);
// 	REQUIRE(board->game_over() == true);

// 	REQUIRE(board->get_winner() == "C");

// 	manager.save_game(board);

// 	//Validate TicTacToeManager.get_winner_total
// 	int o = 0;
// 	int x = 0;
// 	int t = 0;
	
// 	manager.get_winner_total(o, x, t);

// 	REQUIRE(o == 1);
// 	REQUIRE(x == 1);
// 	REQUIRE(t == 1);
// }

TEST_CASE("Test Game over if 16 pegs selected - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(12); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(13); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(14); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(15); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(16); //O
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "C");
}

TEST_CASE("Test first player set to X - 4x4") {
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	REQUIRE(board->get_player() == "X");
}

TEST_CASE("Test first player set to O - 4x4") {
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("O");

	REQUIRE(board->get_player() == "O");
}

TEST_CASE("Test win by first column - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(1);  //X
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(13); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by second column - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(14); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by third column - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(15); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by fourth column - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(12); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(16); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by first row - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(4); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by second row - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(8); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by third row - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(13); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(14); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(15); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(12); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win by fourth row - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(13); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(14); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(15); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(16); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(16); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left - 4x4") {

	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");

	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);

	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);

	board->mark_board(13); //X
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}