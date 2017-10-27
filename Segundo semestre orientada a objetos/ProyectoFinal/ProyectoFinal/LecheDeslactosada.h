#pragma once
#include "Leche.h"

class LecheDeslactosada : public Leche
{
public:
	LecheDeslactosada()
	{
		nombre = "Leche Deslactosada";
		*calorias = 600;
		*id = 5;
	}

	LecheDeslactosada(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Leche(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche deslactosada\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	
};