#include <iostream>
//L�nea que evita errores de leer m�s de una vez una clase 
//(o algo as� jajaja el error dice nueva definici�n de clase base)
#pragma once

using namespace std;

class Enemigo {
protected:
	int CoordX;
	int CoordY;


public:
	Enemigo();

	Enemigo(int x, int y, int d);

	int getCoordX();
	void setCoordX(int x);

	int getCoordY();
	void setCoordY(int y);

	virtual int danio();


};


