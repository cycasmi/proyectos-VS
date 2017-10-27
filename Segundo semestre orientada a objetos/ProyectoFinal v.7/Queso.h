#pragma once
#include "Lacteos.h"

class Queso : public Lacteos
{
protected:
	string consistencia;
	string derretimiento;
	string gramos;

public:
	Queso(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Lacteos(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};