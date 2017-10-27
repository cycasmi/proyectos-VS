#include "Monstruo.h"

Monstruo::Monstruo()
{
	CoordX = 0;
	CoordY = 0;
	cout << "Constructor Monstruo" << endl;
}

Monstruo::Monstruo(int x, int y, char t)
{
	CoordX = x;
	CoordY = y;
	tipo = t;

	cout << "Constructor Monstruo 2" << endl;
}

int Monstruo::getTipo()
{
	return tipo;
}

void Monstruo::setTipo(char t)
{
	tipo = t;
}

//PON ATENCIÓN!!!!!
//ARRIBA DEBÍA SER UN CHAR. TIPO ES CHAR!

//RECUERDA, DANIO NO ES UN ATRIBUTO, ES UN MÉTODO!!

int Monstruo::danio()
{
	if (tipo == 'A')
	{
		return 80;
	}

	else if (tipo == 'B')
	{
		return 60;
	}

	else if (tipo == 'C')
	{
		return 30;
	}

	else
	{
		cout << "Monstruo no valido" << endl;
		return 0;
	}
}


