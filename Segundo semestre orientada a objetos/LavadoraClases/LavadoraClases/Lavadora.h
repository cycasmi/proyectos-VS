#pragma once
#include <iostream>
using namespace std;


//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530

class Lavadora
{
private:
	int peso;
	int precioBase;
	char* color;
	int consumo;
	int carga;


public:
	Lavadora();
	Lavadora(int p, char* color, int consumo, int carga);
	Lavadora(const Lavadora& a);

	int precio();
	int impuestos();
	void print();


	~Lavadora();
};

