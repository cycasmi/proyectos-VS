#include "Marido.h"
#include "Mujer.h"

void Marido::printMaritales()
{
	cout << "Soy el marido y mis datos maritales son: \n";
	print();
	cout << "Mi mujer es: \n";
	mujer->print();
}

void Marido::setMujer(Mujer *m)
{
	mujer = m;
}

Marido::Marido(){}

Marido::Marido(string n, string a) : Persona(n, a)
{
}
