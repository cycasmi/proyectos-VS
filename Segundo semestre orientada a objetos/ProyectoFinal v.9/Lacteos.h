#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Fecha.h"
#include "Almacen.h"

class Lacteos
{
protected:
	string nombre;
	int *id;
	int* calorias;
	Fecha compraDate;

public:
	Lacteos(){}

	Lacteos(string nombre, int calorias, int id, int diaC, int mesC, int anioC) : nombre(nombre), calorias(new int(calorias)), id(new int(id)), compraDate(diaC, mesC, anioC) {}
	
	int caducidad(Fecha actual)
	{
		if (compraDate.getAnio() < actual.getAnio())
			return 0;
			//return "Caducado";

		else if (compraDate.getMes() < actual.getMes())
			return 0;
			//return "Caducado";

		else if (compraDate.getDia() < actual.getDia())
			return 0;
			//return "Caducado";

		else
			return 1;
			//return "Vigente";
	}


	virtual void imprimir() = 0;
	string getNombre() { return nombre; }
	int& getCalorias() { return *calorias; }
	int& getId() { return *id; }
};