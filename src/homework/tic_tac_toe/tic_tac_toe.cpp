//cpp
#include"tic_tac_toe.h"
bool Tic_tac_toe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = "C";
		return true;
	}
	return false;
}
void Tic_tac_toe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Invalid Character! Player Must use only X or O.");
	}
	player = first_player;
	clear_board(); 
}

void Tic_tac_toe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";

	}
}
void Tic_tac_toe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9.");
	}
	else if (player == "")
	{
		throw Error("Game must start first.");
	}

	pegs[position - 1] = player;
	next_player();
}

void Tic_tac_toe::next_player()
{
	if (player == "X")
	{
		player == "O";
	}
	else
	{
		player == "X";
	}
}

bool Tic_tac_toe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
		{
			return true;
		}
	}
	return false;
}

bool Tic_tac_toe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool Tic_tac_toe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " " ||
		pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
	{
		return true;
	}
	return false;
}

void Tic_tac_toe::set_winner()
{
	next_player();
}

		
bool Tic_tac_toe::check_board_full()
{
	for (std::size_t i=0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false; 
		}
	}
	return true; 
}

void Tic_tac_toe::clear_board() const
{
	for (auto &peg : pegs)
	{
		peg == " ";

	}

}

std::ostream & operator<<(std::ostream & out, const Tic_tac_toe & t)
{
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}

	return out;
}

std::istream& operator>>(std::istream& in, Tic_tac_toe& t)
{
	int pos;
	cout << "Enter position: ";
	std::cin >> pos;
	t.mark_board(pos);
	
	return in;
}