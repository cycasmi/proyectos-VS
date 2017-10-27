#include "Matriz.h"

int main()
{
	srand(time(NULL));
	Matriz a = Matriz(2, 2);
	//Matriz b = Matriz(3, 3);
	//a.fillRandom();
	//b.fillRandom();
	//a.transpose();
	a.fillUser();
	//b.fillUser();
	//Matriz c;
	//c = a + b;
	//~a;
	//a^3;
	//cin >> a;

	//cout << c;

	//a.find_if_Mayor(4);
	//a.find_if_negativo();
	//a.find_if_primo();

	//a.find_adyacent_iguales();
	//a.find_adyacent_primos();
	//a.find_adyacent_negativo();

	return 0;
}