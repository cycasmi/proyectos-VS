#include "Incremento.h"

int main()
{
	Incremento<int> i;
	//Con el ampersand estoy diciendo que mando a llamar la dirección de una función, es decir un apuntador a la función.
	//Utiliza la función setGetA que está dentro de incremento
	i.incremento<int, int&(Incremento<int>::*)()>(15, &Incremento<int>::setGetA); //aquí expresamos explícitamente los tipos de la plantilla
	i.incremento(15.33, &Incremento<int>::setGetC); //aquí dejamos que el compilador intuya de qué tipo es la función

	cout << i.setGetA() << endl;
	cout << i.setGetC() << endl;

	//con el la flecha y el int&, le digo el valor de regreso de la funcipon lambda que es un int por referencia en este caso
	i.inc(8.3, [&](Incremento<int> & w)->double&
	{ return w.setGetC();
	});

	i.incre(5, &i, &Incremento<int>::setGetA);

	return 0;
}