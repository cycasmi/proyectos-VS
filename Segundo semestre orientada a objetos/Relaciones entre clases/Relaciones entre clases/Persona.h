#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona
{
public:
	Persona(){}
	Persona(string _nombre, string apellido) : nombre(_nombre), apellido(apellido){}

	void print()
	{
		cout << "Mi nombre es: " << nombre << endl;
		cout << "Mi apellido es: " << nombre << endl;
	}

	virtual void printMaritales() = 0;

protected:
	string nombre;
	string apellido;
};