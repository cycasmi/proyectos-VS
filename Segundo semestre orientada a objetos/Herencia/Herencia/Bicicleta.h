#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Bicicleta //padre
{
public:
	void acelerar(){}
	virtual void frenar(){} //aquí permite que se llame el del hijo.
	
	//constructor
	Bicicleta()
	{
		obligatorio = new int;
	}
	//Por lo general, los constructores son públicos.
	Bicicleta(string _color, int _size, string _marca)
	{
		color = _color; //el color es igual al color por parámetro
		size = _size;
		marca = _marca;
		obligatorio = new int;
	}

	virtual~Bicicleta() //Le ponemos virtual al destructor para delegarlo a los hijos, es decir, primero irá a los hijos a eliminarlos.
	{
		delete obligatorio;
		cout << "Estoy en el destructor de bicicleta";
	}

protected:
	int * obligatorio;
	string color;
	int size;
	string marca;

};

