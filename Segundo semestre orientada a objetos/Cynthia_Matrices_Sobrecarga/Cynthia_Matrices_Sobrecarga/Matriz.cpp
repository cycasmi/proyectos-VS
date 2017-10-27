#include "Matriz.h"

int main()
{
	srand(time(NULL));

	//DEFINE UNA PRIMER MATRIZ
	Matriz a = Matriz(2,2);
	//DEFINE UNA SEGUNDA MATRIZ
	//Matriz b = Matriz(3, 3);

	//LLENAR LA MATRIZ DE MANERA ALEATORIA ***NO LA IMPRIME** Para imprimir, usar cout << a;
	a.fillRandom();
	//b.fillRandom();

	//LLENAR LA MATRIZ MANUALMENTE
	//a.fillUser();
	//b.fillUser();

	//TRANSPUESTA DE LA MATRIZ
	//a.transpose();

	//DEFINICIÓN DE UNA NUEVA MATRIZ VACÍA
	//Matriz c;
	//SE LLENA LA MATRIZ CON LA SUMA DE LAS DOS ANTERIORES
	//c = a + b;

	//CAMBIA EL SIGNO DE LOS NUMEROS DE LA MATRIZ
	//~a;

	//ELEVA LA MATRIZ AL CUBO
	//a^3;

	//SI SE DESEA MODIFICAR LA MATRIZ INSERTÁNDOLE VALORES
	//cin >> a;

	//MULTIPLICA LA MATRIZ POR 2
	//a(2);
	cout << a;

	//cout << c;

	return 0;
}