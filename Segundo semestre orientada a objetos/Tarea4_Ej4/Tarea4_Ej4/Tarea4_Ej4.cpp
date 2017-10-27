#include <iostream>
using namespace std;

void sumaArreglo(int **arr, int tam, int *sum)
{
	for (int i = 0; i < tam; i++)
	{
		*sum *= *(*(arr + 0) + i);
	}
}

void minMaxArreglo()
{

}

void invertidoArreglo()
{

}


int main()
{
	int *suma = new int;
	suma = 0;

	int fila = 1;
	int colum = 5;

	int ** arreglo;
	arreglo = new int*[1];

	for (int i = 0; i<fila; i++)
		arreglo[i] = new int[5];

	*(*(arreglo + 0) + 0) = 5;
	*(*(arreglo + 1) + 0) = 10;
	*(*(arreglo + 2) + 0) = 15;
	*(*(arreglo + 3) + 0) = 20;
	*(*(arreglo + 4) + 0) = 30;

	sumaArreglo(arreglo, colum, suma);
	//cout << suma << endl;
	cout << *(*(arreglo + 0) + 0);

	return 0;
}