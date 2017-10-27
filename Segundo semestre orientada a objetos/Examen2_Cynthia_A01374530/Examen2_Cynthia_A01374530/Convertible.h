#pragma once

#include "Auto.h"
#include <string>

class Convertible : public Auto
{
public:
	Convertible(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : Auto(nombre, modelo, color, automatico, uso, anio, pasajeros, numPuertas, precio, kilometraje){}

public:
	void techoA(string a)
	{
		if (a == "si")
			cout << "El techo esta abierto" << endl;

		if (a == "no")
			cout << "El techo esta cerrado" << endl;
	}

	void techoT(string t)
	{
		if (t == "rigido")
			cout << "El techo es rigido" << endl;

		if (t == "piel")
			cout << "El techo es de piel" << endl;
	}

	void imprimir()
	{
		cout << "Soy un auto Convertible" << endl;
		cout << nombre << endl << modelo << endl << color << endl << automatico << endl << uso << endl << *anio << endl << *pasajeros << endl << *numPuertas << endl << *precio << endl << *kilometraje << endl << endl;
	}

	void precioF(){};

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

	virtual ~Convertible()
	{
		delete anio;
		delete numPuertas;
		delete pasajeros;
		delete precio;
		delete kilometraje;

	}
};