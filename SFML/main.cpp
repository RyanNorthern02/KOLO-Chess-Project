//This CPP file holds all the code for the Menu page of the game

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "chess.h"
#include "pieces.h"
#include "pieces.cpp"
using namespace std;
using namespace sf;

int main()
{
	

	Board b;
	string s;
	bool newgame = true;
	cout << "   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____| \n | |    | |__| | |__  | (___| (___  \n | |    |  __  |  __|  \\___  \\___ \\ \n | |____| |  | | |____ ____) |___) | \n  \\_____|_|  |_|______|_____/_____/ \n" << endl;
	cout << "A game by KOLO" << endl;
	cout << "Enter any key to continue" << endl;
	cin >> s;

	while (newgame) {
		b.setBoard();
		while (b.playGame());
		cout << "Do you want to play again? (y for yes, anything else for no) ";
		cin >> s;
		if (s != "y")
			newgame = false;
	}
	return 0;
}