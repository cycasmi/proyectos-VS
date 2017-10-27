#include "Mujer.h"
#include "Marido.h" //aquí ya se pone al marido para completar la clase incompleta

void Mujer::printMaritales()
{
	cout << "Soy la esposa y mis datos maritales son: \n";
	print();
	cout << "Mi marido es: \n";
	marido->print();
}

void Mujer::setMarido(Marido *m)
{
	marido = m;
}

Mujer::Mujer(){}

Mujer::Mujer(string n, string a) : Persona(n, a)
{
}
