//h
#include "tic_tac_toe.h"
#ifndef TicTacToe4_H
#define TicTacToe4_H
class TicTacToeFour : public Tic_tac_toe
{
public: 
	TicTacToeFour() : Tic_tac_toe(4) {}
	TicTacToeFour(std::vector<string> p, string winner) :Tic_tac_toe(p, winner) {}

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif