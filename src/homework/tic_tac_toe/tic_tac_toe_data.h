//h
#ifndef TicTacToe_data_H
#define TicTacToe_data_H

class TicTacToe_Data
{
public:
	void save_pegs(const vector <Tic_tac_toe> & pgs);
	vector<Tic_tac_toe> get_pegs() const;
protected:
	const string file_name{ "TicTacToe_Data.dat" };
};

#endif // !TicTacToe_data_H
