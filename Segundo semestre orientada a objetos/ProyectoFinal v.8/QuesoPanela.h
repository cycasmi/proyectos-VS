#pragma once
#include "Queso.h"

class QuesoPanela : public Queso
{
public:
	QuesoPanela()
	{
		nombre = "Queso Panela";
		*calorias = 780;
		*id = 10;
		caducidad();
	}
	QuesoPanela(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Queso(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso panela\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};