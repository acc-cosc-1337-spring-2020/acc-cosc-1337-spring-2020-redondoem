//h
#ifndef TicTacToeManager_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
class Tic_tac_toe_Manager 
{
public:
	Tic_tac_toe_Manager() = default;
	Tic_tac_toe_Manager(&TicTacToe_Data);

	friend std::ostream& operator<<(ostream& out, const Tic_tac_toe_Manager& manager);
	void save_game(unique_ptr<Tic_tac_toe> &game);
	friend std::ostream & operator << (ostream & out, const Tic_tac_toe_Manager & manager);
	void get_winner_total(int& o, int& w, int& t);




private: 
	vector<unique_ptr<Tic_tac_toe>> games;
	void update_winner_count(string winner);
	int o_win{ 0 };
	int tie{ 0 };
	int x_win{ 0 };
	int player{ 0 };
	void update_winner_count(string winner);





};
#endif
