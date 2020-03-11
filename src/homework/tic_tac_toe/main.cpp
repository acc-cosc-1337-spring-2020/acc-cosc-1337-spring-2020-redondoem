
# include "Tic_Tac_toe.h"
# include <iostream> 
# include <string>

using std::cout; using std::cin; using std::string;

int main()
{
	char continue = 'y';
	TicTacToe game;
	string player;
	
	do
	{
	cout << "Enter x or o: ";
	cin >> player;
	game.start_game(player);

	while(game.game_over() == false)
	{
	cout << "enter position from 1 to 9: ";
	cin >> position;
	game.mark_board(position);
	}
	cout << "Game over: ";
	
	}while (continue == 'y' || cont == 'Y');
	cout << "play again press y ";
	return 0;
}