# include "Tic_Tac_toe_3.h"
# include "Tic_Tac_toe_4.h"
# include "Tic_Tac_toe.h"
#include "tic_tac_toe_manager.h"

# include <iostream> 
# include <string>

using std::cout; using std::cin; using std::string;

int main()
{
	Tic_tac_toe_Manager manager;
	string cont;
	string player;
	vector<std::reference_wrapper<Tic_tac_toe>> games;
	int position{ 0 }; 
	Tic_tac_toe games;
	bool winner;
	do
	{
		int gamers;
		cout << "Tictactoe 3 or 4";
		cin >> gamers;
		Tic_tac_toe_3 games3;
		Tic_tac_toe_4 game4;

		if (gamers == 3)
		{
			games.push_back(game3);
		}
		else if (gamers == 4)
		{
			games.push_back(game4);
		}

		reference_wrapper<Tic_tac_toe> ganes = games.back();
		string player = "y";
		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;
				*games_get().start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_error();
			}
		} while (!(games.get_player().game_over());

		manager.save_game(game.get());

		cout << "Winner: " << game.get().get_winner() << "\n";
		cout << "Enter Y to play again";
		cin >> cont;
	} while (cont == "y"); 
	cout << manager;
	return 0; 

}