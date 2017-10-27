#pragma once
#include <iostream>
using namespace std;


class Numero
{
private:
	int value;

public:

	void setValue(int valueP);
	int getValue();

	Numero(int valueP);
	Numero();

	Numero operator + (Numero n2);
	bool operator == (Numero n2);

	friend void operator << (ostream, Numero); //Ya que s�lo pueden recibir un solo par�metro (pues el otro es la propia clase) necesito sacarla de la clase
	//Para ello le escribimos friend.

	~Numero();
};


