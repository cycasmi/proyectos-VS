#pragma once

#include "Auto.h"
#include <string>

class Sedan : public Auto
{
public:
	Sedan(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : Auto(nombre, modelo, color, automatico, uso, anio, pasajeros, numPuertas, precio, kilometraje){}

public:

	void imprimir()
	{
		cout << "Soy un Sedan" << endl;
		cout << nombre << endl << modelo << endl << color << endl << automatico << endl << uso << endl << *anio << endl << *pasajeros << endl << *numPuertas << endl << *precio << endl << *kilometraje << endl << endl;
	}
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

	virtual ~Sedan()
	{
		delete anio;
		delete numPuertas;
		delete pasajeros;
		delete precio;
		delete kilometraje;

	}
};