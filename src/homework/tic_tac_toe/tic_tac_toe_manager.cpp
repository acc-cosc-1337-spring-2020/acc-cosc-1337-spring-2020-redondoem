#include "tic_tac_toe_manager.h"

//cpp

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

void Tic_tac_toe_Manager::save_game(Tic_tac_toe b)
{
	update_winner_count(b.get_winner());
	games.push_back(b);
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
