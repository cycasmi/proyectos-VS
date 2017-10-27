#pragma once
#include "Lacteos.h"

class Leche: public Lacteos
{
protected:
	string liquidez;
	string mililitros;

public:
	Leche(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Lacteos (nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche\n";
		cout << nombre << endl << *costo<< endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
	};