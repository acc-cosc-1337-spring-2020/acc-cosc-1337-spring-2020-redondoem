//h

#include <string>
#include <vector>

using std::string; using std::vector;

class Tic_tac_toe
{
public:
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;


private: 
	void set_next_player();
	string player;

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;

};