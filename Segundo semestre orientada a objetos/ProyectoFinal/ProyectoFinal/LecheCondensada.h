#pragma once
#include "Leche.h"

class LecheCondensada : public Leche
{
private:
	string azucarAnadida;

public:
	LecheCondensada()
	{
		nombre = "Leche Condensada";
		*calorias = 800;
		*id = 4;
	}
	LecheCondensada(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Leche(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche Condensada\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
};