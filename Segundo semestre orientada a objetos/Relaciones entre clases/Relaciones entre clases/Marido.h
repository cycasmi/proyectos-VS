#pragma once
#include "Persona.h"
//#include "Mujer.h"

class Mujer;

class Marido : public Persona
{
public:
	void printMaritales();
	void setMujer(Mujer *m); //Le guarda un valor a marido desde el main a la variable de abajo.

	Marido();
	Marido(string n, string a);

protected:
	Mujer *mujer;
};