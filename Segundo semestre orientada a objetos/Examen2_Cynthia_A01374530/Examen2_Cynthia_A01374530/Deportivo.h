#pragma once

#include "Auto.h"
#include <string>

class Deportivo : public Auto
{
public:
	Deportivo(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : Auto(nombre, modelo, color, automatico, uso, anio, pasajeros, numPuertas, precio, kilometraje){}

public:
	void turbo(string a)
	{
		if (a == "si")
			cout << "El turbo está activado" << endl;

		if (a == "no")
			cout << "El turbo está desactivado" << endl;
	}

	void potencia(int p)
	{
		cout << "El auto deportivo tiene una potencia de: " << p;
	}

	void imprimir()
	{
		cout << "Soy un auto Deportivo" << endl;
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

	virtual ~Deportivo()
	{
		delete anio;
		delete numPuertas;
		delete pasajeros;
		delete precio;
		delete kilometraje;

	}
};