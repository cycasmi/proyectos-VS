#pragma once
#include "Queso.h"

class QuesoOaxaca : public Queso
{
public:
	QuesoOaxaca(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Queso(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un queso Oaxaca\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};