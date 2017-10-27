#include "MainGame.h"


MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 500;
	_screenHeight = 200;
}


MainGame::~MainGame()
{
}

void MainGame::run()
{
	initSystems();
}

void MainGame::initSystems()
{
	//Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	//return a pointer to a window.
	_window = SDL_CreateWindow("Prueba de Tutorial", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}