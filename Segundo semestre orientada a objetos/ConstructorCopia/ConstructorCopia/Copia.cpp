#include "Copia.h"

int main()
{
	Copia Y;
	Copia W = Y.llamadaAcopia(Y); //Se imprime 3 veces pork al ponerle que es igual, se manda a llamar. Al usar la funcion y la tercera por el return.

	//LLamada explícita: copia Z = Y;
	//Llamada por el valor
	//Llamada por el parámetro


	return 0;
}
