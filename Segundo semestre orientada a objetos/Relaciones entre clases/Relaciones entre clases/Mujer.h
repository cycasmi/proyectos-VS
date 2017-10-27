#pragma once
#include "Persona.h"
//#include "Marido.h" Le quitamos esto para no generar un error y hacemos un fordward Declaration

class Marido; //Esto, al es una tipo incompleto, es necesario APUNTADORES. 

class Mujer : public Persona
{
public:
	virtual void printMaritales();
	void setMarido(Marido *m); //Le guarda un valor a marido desde el main a la variable de abajo.

	Mujer();
	Mujer(string n, string a);

protected:
	Marido *marido;

};