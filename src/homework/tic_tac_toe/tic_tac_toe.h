//h

#include <string>
#include <vector>
#include<iostream>

using std::string; using std::vector;

class Tic_tac_toe
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const;


private:
	void set_next_player();
	vector<string> board{ 9, " " };
	string next_player;
}; 

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};