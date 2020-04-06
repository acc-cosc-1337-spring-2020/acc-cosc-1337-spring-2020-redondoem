
# include "Tic_Tac_toe.h"
# include <iostream> 
# include <string>

using std::cout; using std::cin; using std::string;

int main()
{
	char cont;
	string player;
	int position{ 0 }; 
	Tic_tac_toe game;
	bool winner;
	do
	{
		cout << "Enter x or o: ";
		cin >> player;
		try {
			game.start_game(player);
		}
		catch (Error a) {
			cout << a.get_error() << "\n";
		}
		do {
			cout << "player " << game.get_player() << " enter position from 1 to 9: ";
			cin >> position;
			try {
				game.mark_board(position);
				game.display_board();
				game.game_over();
				winner = game.game_over();
			}
			catch (Error a) {
				cout << a.get_error() << "\n";
			}
		} while (winner == false);
		cout << "player" << game.get_winner << "won ";
		cout << "press y to restart, press any character to quit: ";
	} while (cont == 'y' || cont == 'Y');

}