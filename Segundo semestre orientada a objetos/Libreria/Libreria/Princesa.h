#pragma once

#include "Personaje.h"
#include <string>

class Princesa : public Personaje
{
private:
	Princesa(){}

public:
	Princesa(string nombre, int popularidad) : Personaje(nombre, popularidad){}

	void imprimir()
	{
		cout << "Soy la princesa " << nombre << " y mi popularidad es de: " << *popularidad << endl;
	}
};