#pragma once

#include "Auto.h"
#include <string>

class Hibrido : public Auto
{
protected:
	Hibrido(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : Auto(nombre, modelo, color, automatico, uso, anio, pasajeros, numPuertas, precio, kilometraje){}

	void imprimir()
	{
		cout << "Soy un tipo de auto hibrido" << endl;
	}

public:

	string getNombre(){};
	string getModelo(){};
	string getColor(){};
	string getAutomatico(){};
	string getUso(){};
	int& getAnio(){};
	int& getPasajeros(){};
	int& getNumPuertas(){};
	int& getPrecio(){};
	int& getKilometraje(){};

	virtual ~Hibrido()
	{
		delete anio;
		delete numPuertas;
		delete pasajeros;
		delete precio;
		delete kilometraje;

	}
};