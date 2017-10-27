#pragma once

#include "Hibrido.h"
#include <string>

class Anfibio : public Hibrido
{
protected:
	Anfibio(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : Hibrido(nombre, modelo, color, automatico, uso, anio, pasajeros, numPuertas, precio, kilometraje){}

	void imprimir()
	{
		Hibrido::imprimir();
		cout << "Soy un auto anfibio" << endl;
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

	virtual ~Anfibio()
	{
		delete anio;
		delete numPuertas;
		delete pasajeros;
		delete precio;
		delete kilometraje;

	}
};