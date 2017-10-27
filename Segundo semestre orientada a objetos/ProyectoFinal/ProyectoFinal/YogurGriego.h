#pragma once
#include "Yogur.h"

class YogurGriego : public Yogur
{
private:
	string fruta;

public:
	YogurGriego()
	{
		nombre = "Yogur Griego";
		*calorias = 500;
		*id = 12;
	}
	YogurGriego(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Yogur(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un yogur griego\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	
};