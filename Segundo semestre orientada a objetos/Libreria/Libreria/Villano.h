#pragma once

#include "Personaje.h"
#include <string>

class Villano : public Personaje
{
protected:
	Villano(){}

public:
	Villano(string nombre, int popularidad) : Personaje(nombre, popularidad){}

	void imprimir()
	{
		cout << "Soy el villano " << nombre << " y mi popularidad es de: " << *popularidad << endl;
	}
};