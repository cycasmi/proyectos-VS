#pragma once

#include "commons.h"
#include "Graphic.h"

class Character : public Graphic
{
protected:
	int* strength;
	string name;

	Character(){ }

public: //lo que está dentro de los paréntesis son los parámetros.
	Character(string _name, int _strength) : name(_name), strength(new int(_strength)){ }
	int& getSetStrength(){ return *strength; }
	string getName()
	{
		return name;
	}

	//Esto hace la clase abstracta
	virtual void attack() = 0;
	virtual void defense() = 0;

	void printMe(){}
	void getPopularity(){}

	//Se le escribe virtual al destructor para mandar a llamar el destructor de los hijos primero y después este.
	virtual ~Character()
	{
		delete strength;
	}
};