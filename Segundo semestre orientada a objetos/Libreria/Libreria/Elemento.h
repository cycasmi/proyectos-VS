#pragma once
#include <iostream>
using namespace std;

class Elemento
{
protected:
	int* popularidad;

public:
	virtual void imprimir() = 0;
	virtual int& getPopularidad() = 0;
};
