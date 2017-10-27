#pragma once

#include "Villano.h"
#include <string>

class Secuaz : public Villano
{
private:
	Secuaz(){}

public:
	Secuaz(string nombre, int popularidad) : Villano(nombre, popularidad){}

	void imprimir()
	{
		//Villano::imprimir();
		cout << "Soy el secuaz " << nombre << " y mi popularidad es de: " << *popularidad << endl;
	}
};