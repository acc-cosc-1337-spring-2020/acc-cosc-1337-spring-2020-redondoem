#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can�t call mark board before start game")
{
	Tic_tac_toe game;
    REQUIRE_THROWS_AS(game.mark_board(1), Error);	
}
	
TEST_CASE("Test start game accepts only X or O")
{
	Tic_tac_toe game;
	REQUIRE_THROWS_AS(game.mark_board(q), Error);
}

TEST_CASE("Test game ends when board is full")
{
	Tic_tac_toe game;
	game.start_game("X");

	for (int i = 1; i < 10; ++i)
	{
		game.markboard(i);
		REQUIRE(game.game_over() == false);

	}
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		 123
		 456
		 789

		First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X        
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true);
}