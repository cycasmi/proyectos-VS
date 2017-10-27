#pragma once
#include "Leche.h"

class LecheLight : public Leche
{
protected:
	string reduccionGrasa;

public:
	LecheLight()
	{
		nombre = "Leche Light";
		*calorias = 400;
		*id = 7;
		caducidad();
	}
	LecheLight(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : Leche(nombre, calorias, id, diaC, mesC, anioC) {}

	void imprimir()
	{
		cout << "\nSoy un leche light\n";
		cout << nombre << endl << endl << *calorias << endl;
		compraDate.imprimir();
	}

	string getNombre() {};
	int& getCalorias() {};
	int& getId() { return *id; }
	string caducidad(){};
};