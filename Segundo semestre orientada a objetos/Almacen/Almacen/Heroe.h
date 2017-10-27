#include "Personaje.h"
#include <string>

class Heroe : public Personaje
{
private:
	Heroe(){};

public:
	Heroe(string name, int popularidad) : Personaje(nombre, popularidad){}

	void imprimir()
	{
		cout << "Soy el heroe " << nombre << endl;
	}

};