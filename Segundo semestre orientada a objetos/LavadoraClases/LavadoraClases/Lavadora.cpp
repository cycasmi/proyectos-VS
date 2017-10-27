//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530

#include "Lavadora.h"

Lavadora::Lavadora()
{
	peso = 60;
	color = "morada";
	consumo = 180;
	carga = 38;
}

Lavadora::Lavadora(int p, char* color, int consumo, int carga)
{
	this->peso = p;
	this->color = color;
	this->consumo = consumo;
	this->carga = carga;
}

Lavadora::Lavadora(const Lavadora& a)
{
	this->peso = a.peso;
}

int Lavadora::precio()
{
	if (peso >= 80)
		precioBase = 100000;
	else if ((peso > 49) && (peso < 80))
		precioBase = 80000;
	else if ((peso > 19) && (peso < 50))
		precioBase = 50000;
	else
		precioBase = 10000;
	return precioBase;
}

int Lavadora::impuestos()
{
	if (precio() >= 80000)
		precioBase = precio() + (20000 * 0.3) + ((precio() - 40000)*0.4) + ((precio() - 80000)*0.5);
	else if (precio() >= 40000)
		precioBase = precio() + (20000 * 0.3) + ((precio() - 40000)*0.4);
	else if (precio() >= 20000)
		precioBase = precio() + (20000 * 0.3);
	return precioBase;
}

void Lavadora::print()
{
	cout << "Peso: " << peso << endl << "Color: " << color << endl << "Consumo: " << consumo << endl << "Carga: " << carga << endl << "Precio total: " << impuestos() << endl << endl;
}



Lavadora::~Lavadora()
{
}
