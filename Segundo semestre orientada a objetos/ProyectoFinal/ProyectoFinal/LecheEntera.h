#pragma once
#include "Leche.h"

class LecheEntera : public Leche
{
public:
	LecheEntera()
	{
		nombre = "Leche Condensada";
		*calorias = 700;
		*id = 6;
	}
	LecheEntera(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Leche(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche entera\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
};