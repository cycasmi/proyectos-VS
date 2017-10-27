#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Cesar
{
public:
	//Par�metro para la cadena a encriptar
	string aEncriptar;
private:
	//Cadena encriptada
	string encriptada;

	string desencriptado;

	//Arreglo que guarda las constantes de desencripci�n
	int constantes;

	string* desencriptador;


public:
	//M�todo que encripta la cadena y la guarda en par�metro encriptada
	string cypher();
	//M�todo que recibe la constante de desplazamiento y desen
	void decrypt();

	void cypher(int c);

	void decrypt(int c);

	string operator[](int a);

	void operator()(int c);

	friend ostream & operator << (ostream&, Cesar&);

	Cesar();
	Cesar(string aEnc);
	Cesar(Cesar& a);

	string getaEncriptar();
	int getCostantes();
	string getDesencriptado();
	string getEncriptada();
	string getDesencriptador();
};

