//h
#ifndef Tic_tac_toe_3
#define Tic_tac_toe_3
#include "tic_tac_toe.h"
#include<string>
#include<vector>
class Tic_tac_toe_3 : public Tic_tac_toe
{
public:
	Tic_tac_toe_3() : Tic_tac_toe(3) {}
private:
	bool check_column_win() override;
	bool check_row_win() override;
	bool check_diagonal_win() override;


};
#endif Tic_tac_toe_3