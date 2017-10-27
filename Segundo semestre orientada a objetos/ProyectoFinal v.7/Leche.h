#pragma once
#include "Lacteos.h"

class Leche: public Lacteos
{
protected:
	string liquidez;
	string mililitros;

public:

	Leche()
	{
		nombre = "Leche";
		*calorias = 600;
	}
	Leche(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Lacteos (nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
	};