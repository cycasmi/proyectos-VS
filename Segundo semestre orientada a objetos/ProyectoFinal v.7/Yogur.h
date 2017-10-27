#pragma once
#include "Leche.h"

class Yogur : public Leche
{
protected:
	string acidez;

public:
	Yogur(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Leche(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un yogur\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};