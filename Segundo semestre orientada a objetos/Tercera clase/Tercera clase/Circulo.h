#pragma once
#include <iostream>
using namespace std;

class Circulo
{
private:
	//const float pi = 3.1416; se prefiere no hacer esto para no crear varias pi's
	float* pi; //mejor se hace un apuntador
	float radio;

public:
	float area();

private:
	//CONSTRUCTORES
	//este es el constructor Default
	Circulo();
public:
	Circulo(float radio, float* pi);
	Circulo(const Circulo& c); //siempre se le pone primero const el nombre de la clase y se le da un nombre a eso.

};
