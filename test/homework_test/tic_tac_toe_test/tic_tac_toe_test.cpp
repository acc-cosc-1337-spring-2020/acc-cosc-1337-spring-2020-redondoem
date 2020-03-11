#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")
{
       TicTacToe game;
       REQUIRE_THROWS_AS(game.mark_board(1), Error);	
}
	
TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(q), Error);
}

TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (int i = 1; i < 10; ++i)
	{
		game.markboard(i);
		REQUIRE(game.game_over() == false);

	}
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

