#include <iostream>
#include <string>
using namespace std;

void remplazar(string soluciones[], int *solucion, string *word, char letter, string abecedarioElem, string abecedario[], int *abc)
{

}

void ciclo(string soluciones[], int *solucion, string *word, char letter, string abecedarioElem, string abecedario[], int *abc)
{

}

int recursivo(string soluciones[], int *solucion, string *casos, char caso, int conjuntos, string abecedarioElem, string abecedario[], int *abc)
{
	switch (caso)
	{
	case 'u':
		return 1;
		break;
	}
}

int main()
{
	string casos[5];
	casos[0] = "u1w";
	string abecedario[10];
	abecedario[0] = "0";
	abecedario[1] = "1";
	string soluciones[10];
	int abc = 2;
	int conjuntos = 1;
	int solucion = 0;

	for (int i = 0; i < conjuntos; i++)
	{
		for (int j = 0; j < abc; j++)
		{
			cout << "Cambio de u, valor de remplazo: " << abecedario[j] << endl;
			soluciones[solucion] = casos[i];
			if (recursivo(soluciones, &solucion, &soluciones[solucion], soluciones[solucion][i], conjuntos, abecedario[j], abecedario, &abc)){
			}
		}
	}


	cout << "\n\nLa soluciones son: ";
	for (int i = 0; i < solucion; i++){
		cout << soluciones[i] << " ";
	}
	return 0;
}