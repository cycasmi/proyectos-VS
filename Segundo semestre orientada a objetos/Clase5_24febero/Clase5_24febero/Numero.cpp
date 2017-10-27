#include "Numero.h"


Numero::Numero(int valueP)
{
	value = valueP;
}

Numero::Numero()
{
	value = 0;
}

Numero Numero::operator+(Numero n2)
{
	Numero res(value + n2.getValue());//(suma el value de la clase más el value que me estan pasando) Todo eso lo guardo en una variable.
	return res;  
}

bool Numero::operator == (Numero n2)
{
	/*if (value == n2.getValue())
		return true;
	else
		return false;*/

	//es lo mismo que arriba pero más óptimo
	return (value == n2.getValue());
}

//Implementando el set y el get
void Numero::setValue(int valueP)
{
	value = valueP;
}

int Numero::getValue()
{
	return value;
}

void operator << (ostream os, Numero n)
{
	//No pondremos para imprimir cout pork ya tenemos al os, el ostream.
	os << n.value;
}

Numero::~Numero()
{
}
