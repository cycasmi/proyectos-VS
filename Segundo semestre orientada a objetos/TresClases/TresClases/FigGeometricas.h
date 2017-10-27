#pragma once
#include <iostream>
using namespace std;

//CLASE ABSTRACTA
//Aquí no me sirve que haya instancias ya que es distinto (el calculo del area por ej.) en cada figura.
class FigGeometricas
{
public:
	virtual float area() = 0;
	//virtual float perimetro() = 0;

	FigGeometricas();
	~FigGeometricas();
};

