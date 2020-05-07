//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


void TicTacToe_Data::save_pegs(const vector<string>& xxx)
{
	ofstream file_out(file_name, ios_base::pegss);
	for (auto pegs : xxx)
	{
		for (auto ss : xxx)
		{
			file_out << " ";
		}
		file_out << get_winner();
		file_out << "\n";
	}

	file_out.close();
}

vector<unique_ptr<Tic_tac_toe>> TicTacToe_Data::get_pegs() const
{
	ifstream read_file(file_name);
	unique_ptr<Tic_tac_toe> board;

	while (open_file.is_open())
	{
		vector<string> pegs{};
		string p;
		string winner; 
		string linessss;
		while (getline(open_file, linessss))
		{
			unique_ptr <Tic_tac_toe> board;
			if (pegs.size() == 9)
			{
				board = make_unique<Tic_tac_toe_3>(p, winner);

			}
			else if (pegs.size() == 16)
			{
				board = std::make_unique<Tic_tac_toe_3>(p, winner);
			}

		}
	}
	open_file.close();

	return vector < std::unique_ptr<Tic_tac_toe>>();
}
