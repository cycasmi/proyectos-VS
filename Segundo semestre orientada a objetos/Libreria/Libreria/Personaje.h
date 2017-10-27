#pragma once

#include "Elemento.h"
#include "string"

class Personaje : public Elemento
{
protected:
	string nombre;

	Personaje();

public:
	Personaje(string _nombre, int _popularidad) : nombre(_nombre)
	{
		this->popularidad = new int(_popularidad);
	}

	int& getPopularidad()
	{
		return *popularidad;
	}


	string getNombre()
	{
		return nombre;
	}

	void imprimir(){}

	virtual ~Personaje()
	{
		delete popularidad;
	}
};