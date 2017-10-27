#include "FigGeometricas.h"

class CuerposGeometricos
{
protected:
	//Para definir PI que es el mismo valor para todas, podemos crear un apuntador.
	//Otra forma de definirla para todos, es mediante variables est�ticas (a fin de evitar que con cosntantes se creen copias).
	//Para eso se usa la palabra Static. Siempre deben inicializarse.

	//En este caso no se puede inicializar aqu�. Si embargo, una opci�n para hacerlo es la siguiente:
protected:
	const float pi = 3.14; //static constexpr float pi = 3.2
	float radio;

public:
	virtual float volumen() = 0; //es virtual puro pork no tiene implementaci�n.

	CuerposGeometricos();
	~CuerposGeometricos();
};

