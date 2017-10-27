#pragma once
#include "Queso.h"

class QuesoAmarillo : public Queso
{
public:
	QuesoAmarillo(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Queso(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un Queso amarillo\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};