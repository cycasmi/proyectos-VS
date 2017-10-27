#include "FigGeometricas.h"

//CLASE ABSTRACTA.
class FigPlanas : public FigGeometricas
{
protected:
	float base;
	float altura;

public:
	//Se le har� una implementaci�n parcial al siguiente.
	virtual float area(); //Aqu� ya no es un virtual puro. Se le har� implementaci�n y se le pone virtual para que los hijos puedan acceder a ella.

	FigPlanas();
	~FigPlanas();
};

