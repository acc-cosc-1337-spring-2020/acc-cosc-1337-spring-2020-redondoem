//h
#ifndef  TIC_TAC_TOE_H
#define  TIC_TAC_TOE_H


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
	friend std::ostream& operator<<(std::ostream& out, const Tic_tac_toe& t);
	friend std::istream& operator>>(std::istream& in, Tic_tac_toe& t);

protected:
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	vector<string> pegs;



private:
	bool check_board_full();
	void clear_board() const;
	void next_player();
	void set_winner();
	string player;
	string winner;
};


class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;

};

#endif // ! TIC_TAC_TOE_H