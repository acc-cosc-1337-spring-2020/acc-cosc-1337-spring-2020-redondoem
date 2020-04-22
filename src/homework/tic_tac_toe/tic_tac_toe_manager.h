//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"


class Tic_tac_toe_Manager : public Tic_tac_toe
{
public:
	friend std::ostream& operator<<(std::ostream& out, const Tic_tac_toe_Manager& manager);
	void save_game(const Tic_tac_toe b );
	void get_winner_total(int& o, int& w, int& t);




private: 
	vector<Tic_tac_toe> games;
	void update_winner_count(string winner);
	int o_win{ 0 };
	int tie{ 0 };
	int x_win{ 0 };



};
