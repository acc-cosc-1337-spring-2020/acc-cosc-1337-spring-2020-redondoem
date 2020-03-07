#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")
{
       Tic_tac_toe game;
       REQUIRE_THROWS_AS(game.mark_board(1), Error);	
}
	
TEST_CASE("Test start game accepts only X or O")
{
	Tic_tac_toe game;
	REQUIRE_THROWS_AS(game.start_game(g), Error);
}

TEST_CASE("Test set first player to o")
{
	Tic_tac_toe game;
	REQUIRE(game.get_player(o) == o);
}

TEST_CASE("Test set first player to X")
{
	Tic_tac_toe game;
	REQUIRE(game.get_player(X) == X);
}

TEST_CASE("Test start game with X game flow")
{
	Tic_tac_toe game;
	
	game.start_game(x);
	REQUIRE(game.get_player() == x);

	game.mark_board(4);
	REQUIRE(game.get_player() == 4);

}
TEST_CASE("Test start game with O game flow")
{
	Tic_tac_toe game;

	game.start_game(o);
	REQUIRE(game.get_player() == o);

	game.mark_board(2);
	REQUIRE(game.get_player() == x);



}
