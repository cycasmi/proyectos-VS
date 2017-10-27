#include "Enemigo.h" 

Enemigo::Enemigo()
{
	CoordX = 0;
	CoordY = 0;

	cout << "Constructor Enemigo" << endl;
}

Enemigo::Enemigo(int x, int y, int d)
{
	CoordX = x;
	CoordY = y;

	cout << "Constructor Enemigo 2" << endl;
}

int Enemigo::getCoordX()
{
	return CoordX;
}

void Enemigo::setCoordX(int x)
{
	CoordX = x;
}

int Enemigo::getCoordY()
{
	return CoordY;
}

void Enemigo::setCoordY(int y)
{
	CoordY = y;
}

int Enemigo::danio()
{
	return 0;
}




