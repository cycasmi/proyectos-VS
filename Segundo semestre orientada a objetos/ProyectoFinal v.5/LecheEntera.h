#pragma once
#include "Leche.h"

class LecheEntera : public Leche
{
public:
	LecheEntera(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Leche(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche entera\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};