//h

#include <string>
#include<iostream>

using std::string; 

class TicTacToe
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; };


private:
	void set_next_player();
	string player;
}; 

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};