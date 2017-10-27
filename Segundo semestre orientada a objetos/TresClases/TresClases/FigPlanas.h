#include "FigGeometricas.h"

//CLASE ABSTRACTA.
class FigPlanas : public FigGeometricas
{
protected:
	float base;
	float altura;

public:
	//Se le hará una implementación parcial al siguiente.
	virtual float area(); //Aquí ya no es un virtual puro. Se le hará implementación y se le pone virtual para que los hijos puedan acceder a ella.

	FigPlanas();
	~FigPlanas();
};

