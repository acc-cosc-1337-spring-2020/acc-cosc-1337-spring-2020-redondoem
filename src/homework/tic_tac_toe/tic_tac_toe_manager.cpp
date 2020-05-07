#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include<iostream>
#include<string>

//cpp

Tic_tac_toe_Manager::Tic_tac_toe_Manager(TicTacToe_Data)
{
	data.get_games();
}


std::ostream & operator<<(std::ostream & out, const Tic_tac_toe_Manager & manager)
{
	out << "\n";

	for (auto game : manager.games) 
	{
		out << game;
		out << "\n";
	}

	return out;

}

void Tic_tac_toe_Manager::save_game(unique_ptr<Tic_tac_toe> &games)
{
	update_winner_count(games->get_winner());
	games.push_back(std::move(games));
}

void Tic_tac_toe_Manager::get_winner_total(int & o, int & w, int & t)
{
	o = o_win;
	w = x_win;
	t = tie;
}

void Tic_tac_toe_Manager::update_winner_count(string winner)
{
	if (winner == "X") 
	{
		x_win++;
	}
	else if (winner == "O") 
	{
		o_win++;
	}
	else 
	{
		tie++;
	}
}
