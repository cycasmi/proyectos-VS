#pragma once
#include "Queso.h"

class QuesoOaxaca : public Queso
{
public:
	QuesoOaxaca()
	{
		nombre = "Queso Oaxaca";
		*calorias = 850;
		*id = 9;
		caducidad();
	}
	QuesoOaxaca(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Queso(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso oaxaca\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};