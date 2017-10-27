#pragma once
#include "Leche.h"

class Yogur : public Leche
{
protected:
	string acidez;

public:
	Yogur(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Leche(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un yogur\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};