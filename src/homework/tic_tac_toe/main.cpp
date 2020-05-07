#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

#include<iostream>

using std::cout; using std::cin; using std::string;

int main()
{
	Tic_tac_toe_Manager manager;
	string cont;
	string first_player;
	int gametype, x, o, t;
	bool winner;
	unique_ptr<Tic_tac_toe> games;
	unique_ptr<Tic_tac_toe_Manager> manager = make_unique<Tic_tac_toe_Manager>();

	do
	{
		string player = "Y";
		Tic_tac_toe game;
		cout << "Enter 3 for a 3x3 TicTacToe or 4 for a 4x4 TicTacToe game: " << "\n";
		cin >> gametype;
		if (gametype == 3)
		{
			game = make_unique<Tic_tac_toe_3>();

		}
		else if (gametype == 4)
		{
			game = game = make_unique<TicTacToeFour>();

		}
		cout << "Enter a x or o for the first player to start game: ";


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