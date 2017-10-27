#pragma once
#include "Leche.h"

class LecheCondensada : public Leche
{
private:
	string azucarAnadida;

public:
	LecheCondensada(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Leche(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche Condensada\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};