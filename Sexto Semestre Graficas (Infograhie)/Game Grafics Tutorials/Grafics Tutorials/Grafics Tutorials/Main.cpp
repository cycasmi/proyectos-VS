/*
//SDL has its own main fuction
#include <SDL\include\SDL.h>

//To make the program call your main you should add
//parameters to it.
int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	return 0;
}
*/

#include <iostream>
#include "MainGame.h"

int main(int argc, char** argv)
{
	MainGame mainGame;
	mainGame.run();

	std::cout << "Enter something to quit\n";
	int a;
	std::cin >> a;
	return 0;
}

