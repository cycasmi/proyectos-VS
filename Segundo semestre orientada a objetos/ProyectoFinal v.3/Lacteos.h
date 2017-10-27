#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Fecha.h"

class Lacteos
{
protected:
	string nombre;
	int* costo, *precio;
	int* calorias;
	Fecha compraDate;

public:

	Lacteos(string nombre, int costo, int precio, int calorias, int diaC, int mesC, int anioC) : nombre(nombre), costo(new int(costo)), precio(new int(precio)), calorias(new int(calorias)), compraDate(diaC, mesC, anioC) {}
	
	string caducidad(Fecha actual)
	{
		if (compraDate.getAnio() < actual.getAnio())
			return "Caducado";

		else if (compraDate.getMes() < actual.getMes())
			return "Caducado";

		else if (compraDate.getDia() < actual.getDia())
			return "Caducado";

		else
			return "Vigente";
	}


	virtual void imprimir() = 0;
	string getNombre() { return nombre; }
	int& getCosto() { return *costo; }
	int& getPrecio() { return *precio; }
	int& getCalorias() { return *calorias; }
};