//h
#ifndef Tic_tac_toe_3_H
#define Tic_tac_toe_3_H
#include "tic_tac_toe.h"
#include<string>
#include<vector>
class Tic_tac_toe_3 : public Tic_tac_toe
{
public:
	Tic_tac_toe_3() : Tic_tac_toe(3) {}
	Tic_tac_toe_3(vector<string> p, string winner) : Tic_tac_toe(p, winner) {}
private:
	bool check_column_win() override;
	bool check_row_win() override;
	bool check_diagonal_win() override;


};
#endif 