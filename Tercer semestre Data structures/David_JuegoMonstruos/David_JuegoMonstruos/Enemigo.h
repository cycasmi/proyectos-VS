#include <iostream>
//Línea que evita errores de leer más de una vez una clase 
//(o algo así jajaja el error dice nueva definición de clase base)
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


