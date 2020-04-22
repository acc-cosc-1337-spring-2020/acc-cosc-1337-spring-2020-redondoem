#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main()
{
	Tic_tac_toe_Manager manager;
	string cont;

	do
	{
		string player = "Y";
		Tic_tac_toe game;

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game.start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> game;
				cout << game;
			}
			catch (Error e)
			{
				cout << e.get_error();
			}

		} while (!game.game_over());

		manager.save_game(game);

		cout << "\nWinner: " << game.get_winner() << "\n";

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y");

	cout << manager;

	return 0;
}