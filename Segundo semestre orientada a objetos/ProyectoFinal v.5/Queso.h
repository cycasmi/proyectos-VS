#pragma once
#include "Lacteos.h"

class Queso : public Lacteos
{
protected:
	string consistencia;
	string derretimiento;
	string gramos;

public:
	Queso(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : Lacteos(nombre, costo, precio, calorias, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso\n";
		cout << nombre << endl << *costo << endl << *precio << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCosto() {};
	int& getPrecio() {};
	int& getCalorias() {};
	string caducidad(){};
};