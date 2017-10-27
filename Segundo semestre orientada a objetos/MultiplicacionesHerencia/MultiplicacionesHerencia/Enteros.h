#pragma once
#include <iostream>
using namespace std;

class Enteros
{
private:
	int valor;
public:
	Enteros(){}

	Enteros(int v)
	{
		valor = v;
	}

	int convertor(Enteros a)
	{
		int c = a.valor;
		return c;
	}
};

