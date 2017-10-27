#pragma once
#include "Yogur.h"

class YogurGriego : public Yogur
{
private:
	string fruta;

public:
	YogurGriego(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Yogur(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Yogur Griego\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};