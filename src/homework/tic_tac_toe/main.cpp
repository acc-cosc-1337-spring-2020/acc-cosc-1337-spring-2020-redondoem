
# include "Tic_Tac_toe.h"
# include <iostream> 
# include <string>

using std::cout; using std::cin; using std::string;

int main()
{
	auto contin = 'y';
	Tic_tac_toe game;
	string player;
	int position;
	
	do
	{
	cout << "Enter x or o: ";
	cin >> player;
	game.start_game(player);
	{
	cout << "enter position from 1 to 9: ";
	cin >> position;
	game.mark_board(position);
	}
	if (!(player == "X" || player == "O"))
	{
		try
		{
			cout << "player" << "\n";
			cin >> player; 
			game.start_game(player);
		}
		catch (Error e)
		{
			cout << e.get_error() << "\n";
		}
	}

	if (!(position < 1 || position < 9 ))
	{
		try
		{
			cout << "position" << "\n";
			cin >> position;
			game.mark_board(position);
		}
		catch (Error e)
		{
			cout << e.get_error() << "\n";
		}
	}

	}while (contin == 'y' || contin == 'Y');
	cout << "play again press y ";
	return 0;
}