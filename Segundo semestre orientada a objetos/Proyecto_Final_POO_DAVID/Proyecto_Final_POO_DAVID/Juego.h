#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

/*#include "Obeja.h"
#include "Lobo.h"
#include "Objeto.h"*/

using namespace std;

class Juego{

private:
	char mapa[10][10];
	/*	Lobo* lo;
	Obeja* oj;
	Objeto* ob;*/
	int num_lobos;
	int num_obejas;
	int num_rocas;
	int num_humanos;
	int num_arbustos;

public:
	Juego() {}
	void rellenar();
};
#endif 
