//h

#include <string>
#include <vector>
#include <iostream>
using namespace std;
using std::string; using std::vector;

class Tic_tac_toe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const { return player; }
	void display_board() const;
	string get_winner() const { return winner; }
private:
	bool check_board_full();
	void clear_board() const;
	void next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	string player;
	string winner;
	vector<string> pegs{ 9, " " };
};


class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;

};

