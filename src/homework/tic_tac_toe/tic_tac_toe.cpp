//cpp
#include"tic_tac_toe.h"


/*void Tic_tac_toe::next_player()
{
	if ()
	
}*/

void Tic_tac_toe::start_game(string first_player)
{
	next_player = first_player;

	if (next_player == "X")
	{
		next_player == "O";
	}

	else if (!(next_player == "X" || next_player == "O"))
	{
		throw Error("Input must be X or O");

	}
	else
	{
		next_player = "X";
	}

}

void Tic_tac_toe::mark_board(int position)
{
	board[position - 1] = next_player;
	set_next_player();
	if (position < 1 || position < 9)
	{
		throw Error(" out of range, position must be more than 1 or less than 9 "); 
	}
}

string Tic_tac_toe::get_player() const
{
	return next_player;
}

void Tic_tac_toe::set_next_player()
{
	if (next_player == "X")
	{
		next_player == "O";
	}

	else if (!(next_player == "X" || next_player == "O"))
	{
		throw Error("Input must be X or O");

	}
	else
	{
		next_player = "X";
	}
	
}
