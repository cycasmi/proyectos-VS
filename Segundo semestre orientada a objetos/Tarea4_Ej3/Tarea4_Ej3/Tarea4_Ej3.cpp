//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea 4, ejercicio 3.

#include <iostream>
using namespace std;

int main()
{
	int fila = 5;
	int columna = 3;

	int **arr;
	arr = new int *[fila];
	for (int i = 0; i < 3; i++)
		arr[i] = new int[columna];

	*(*(arr + 0) + 0) = 5;
	*(*(arr + 0) + 1) = 6;
	*(*(arr + 0) + 2) = 7;
	*(*(arr + 0) + 3) = 8;

	cout << *(*(arr + 0) + 0) << " " << *(*(arr + 0) + 1) << " " << *(*(arr + 0) + 2) << " " << *(*(arr + 0) + 3) << endl;

	return 0;
}