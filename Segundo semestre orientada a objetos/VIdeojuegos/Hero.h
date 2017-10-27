#pragma once
#include <string>
#include "Character.h"

class Hero : public Character
{
private:
    Hero(){} //basicamente este no me sirve.
    
public://lista de inicialicación
    Hero(string name, int strength) : Character(name, strength){} //INCORRECTO name(name), strength (new int (strength)). 
	//No puede hacerse lo anterior porque la lista es lo primero que se manda a llamar pues todavia no creo el objeto padre.
	//Aquí se manda a llamar el constructor del padre.

	//Otra forma, sin usar la lista es:¿
	/*
	Hero(string name, int strength) : Character(name, strength)
	{
		this->name;
		this->strength = strength;
	}
	*/
    
    void attack()
    {
        cout << "Hero Attacking the villain" << endl;
    }
    
    void defense()
    {
        cout << "Hero defending from the villain" << endl;
    }

	void printMe()
	{
		cout << "Soy el hero" << name;
	}
};
