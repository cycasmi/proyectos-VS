#include "Cesar.h"

string Cesar::cypher()
{
	constantes = rand() % 10;

	for (int i = 0; i < aEncriptar.length(); i++)
	{
		encriptada[i] = (aEncriptar[i] + constantes);
	}
	return encriptada;
}

void Cesar::decrypt()
{
	desencriptador = new string[26];
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < aEncriptar.length(); j++)
		{
			encriptada[j] = (aEncriptar[j] + (i + 1));
		}
		desencriptador[i] = encriptada;
	}
}

void Cesar::cypher(int c)
{
	for (int i = 0; i < aEncriptar.length(); i++)
	{
		encriptada[i] = (aEncriptar[i] + c);
	}
}

void Cesar::decrypt(int c)
{
	for (int i = 0; i < aEncriptar.length(); i++)
	{
		desencriptado[i] = (encriptada[i] - c);
	}
}

string Cesar::operator[](int a)
{
	return desencriptador[a];
}

void Cesar::operator()(int c)
{
	for (int i = 0; i < aEncriptar.length(); i++)
	{
		encriptada[i] = (aEncriptar[i] + c);
	}
}

ostream & operator << (ostream & os, Cesar & b)
{
	return os << b.cypher();
}

Cesar::Cesar()
{
	aEncriptar = "Hola";
}

Cesar::Cesar(string aEnc)
{
	aEncriptar = aEnc;
}

Cesar::Cesar(Cesar& a)
{
	aEncriptar = a.getaEncriptar();
	constantes = a.getCostantes();
	desencriptado = a.getDesencriptado();
	encriptada = a.getEncriptada();
}

string Cesar::getaEncriptar()
{
	return aEncriptar;
}

int Cesar::getCostantes()
{
	return constantes;
}

string Cesar::getDesencriptado()
{
	return desencriptado;
}

string Cesar::getEncriptada()
{
	return encriptada;
}

