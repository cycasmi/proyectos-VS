#include "Hoyo.h"

Hoyo::Hoyo()
{
	CoordX = 0;
	CoordY = 0;
	cout << "Constructor Hoyo" << endl;
}

Hoyo::Hoyo(int x, int y, int di)
{
	CoordX = x;
	CoordY = y;
	diametro = di;

	cout << "Constructor Hoyo 2" << endl;
}

int Hoyo::getDiametro()
{
	return diametro;
}

void Hoyo::setDiametro(int di)
{
	diametro = di;
}


int Hoyo::danio()
{
	cout << "Te caiste!!  XD :" << endl;
	if (diametro == 5)
	{
		return 5;
	}

	if (diametro == 10)
	{
		return -1;
	}
}

