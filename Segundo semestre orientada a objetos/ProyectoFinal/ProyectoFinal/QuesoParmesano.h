#pragma once
#include "Queso.h"

class QuesoParmesano : public Queso
{
public:
	QuesoParmesano()
	{
		nombre = "Queso Parmesano";
		*calorias = 1100;
		*id = 11;
	}
	QuesoParmesano(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Queso(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso parmesano\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	

};