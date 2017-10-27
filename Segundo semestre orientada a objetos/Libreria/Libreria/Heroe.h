#pragma once

#include "Personaje.h"
#include <string>

class Heroe : public Personaje
{
private:
	Heroe(){}

public:
	Heroe(string nombre, int popularidad) : Personaje(nombre, popularidad){}

	void imprimir()
	{
		cout << "Soy el heroe " << nombre << " y mi popularidad es de: " << *popularidad << endl;
	}
};