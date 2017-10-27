//#include <stdafx.h>

#pragma once

#include <string.h>
#include <iostream>
using namespace std;

#ifndef PERSONA
#define PERSONA

class Persona
{
private:
	string apellidoPaterno;
	string apellidoMaterno;

public:
	void leer();

private:
	string nombre;
	int edad;
};

#endif

