//h

#include <string>
#include <vector>

using std::string; using std::vector;

class Tic_tac_toe
{
public:
	void start_game(string player);
	void mark_board(int position);
	void mark_board(int position);
	std::string get_player() const { return player; };
	void display_board



private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	std::vector<std::string> pegs{ 9, "" };
}

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;

};