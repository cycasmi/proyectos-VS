#include "Elementos.h"
#include <string>

class Personaje : public Elementos
{
protected:
	int* popularidad;
	string nombre;

	Personaje(){ }

public: //lo que está dentro de los paréntesis son los parámetros.
	Personaje(string _name, int _strength) : nombre(_name), popularidad(new int(_strength)){ }
	int& getSetStrength(){ return *popularidad; }
	string getName();

	
	virtual ~Personaje()
	{
		delete popularidad;
	}
};

/*class Personaje : public Elementos
{
protected:
	string nombre;

	Personaje(){}

public:
	Personaje(string _nombre, int* _popularidad) : nombre(_nombre)
	{
		_popularidad = new int (*popularidad);
	}

	string getName();

	void imprimir(){};

	virtual ~Personaje()
	{
		delete popularidad;
	}
};*/