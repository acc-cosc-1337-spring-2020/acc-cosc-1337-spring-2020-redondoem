#include "tic_tac_toe.h"

//cpp

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;

	}

	else
	{
		throw Error("Invalid Character! Player Must use only X or O.");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be between 1 and 9.");
	}

	if (player == "")
	{
		throw Error(" Must start game first.");
	}
	set_next_player();
}

void TicTacToe::set_next_player()
{

	if (player == "X")
	{
		player = 'O';
	}

	else
	{
		player = 'X';
	}
}
