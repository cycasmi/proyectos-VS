//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea 3, creación de matrices utilizando apuntadores.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using  namespace std;

void valoresMatriz(int **m, int col, int fil)
{
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			m[i][j] = rand() % 10;
		}
	}

}



void impresionMatriz(int **m, int col, int fil)
{
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << m[i][j] << " ";
		}

		cout << "\n";
	}

}



int main()
{
	srand(time(NULL));

	int numfil = 5;
	int numcol = 6;

	int **matriz = new int*[numcol];

	for (int i = 0; i < numfil; i++)
	{
		matriz[i] = new int[numfil];
	}

	valoresMatriz(matriz, numcol, numfil);
	impresionMatriz(matriz, numcol, numfil);

	return 0;
}