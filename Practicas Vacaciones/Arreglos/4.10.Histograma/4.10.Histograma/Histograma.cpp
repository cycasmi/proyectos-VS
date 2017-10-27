/*PUNTOS IMPORTANTES
	*Se utiliza el valor de un arreglo dentro de otro arreglo (en frecuencia). Dato importante a tomar en cuenta. 
	*Para imprimir el histograma se utilizan dos ciclos anidados. Uno para imprimir las primeras cosas y otro para imprimir un
	asterisco por cada valor de la frecuencia. Obviamente, sin espacios ( \n ) entre los ciclos pero sí al final del segundo.
*/

#include <iostream>
#include <iomanip> //Librería utilizada para dar formato a tablas y números. Contiene el setw
using namespace std;

int main()
{
	//variables constante para hacer más escalable el programa.
	const int arraySize = 15;
	const int frequencySize = 11; //indica el puntaje que puede obtener (1 - 10). Se desprecia el primer espacio del arreglo;
	int n[arraySize] = { 3, 5, 6, 8, 10, 1, 10, 5, 6, 9, 5, 6, 2, 10, 5 }, freq[frequencySize] = {0};

	//Si no inicio al menos 1 de los valores (pero no todos), los demás se ponen autmáticamente en 0.
	/*for (int i = 0; i < arraySize; i++)
	n[i] = i + 2;*/

	for (int puntaje = 0; puntaje < arraySize; puntaje++)
		++freq[n[puntaje]];
		

	cout << "Puntaje" << setw(12) << "Frecuencia" << setw(12) << "Histograma" << endl << endl;

	for (int i = 1; i < frequencySize; i++)
	{
		cout << setw(4) << i << setw(11) << freq[i] << setw(10);
		
		for (int j = 0; j < freq[i]; j++)
			cout << "*";

		cout << endl;

	}

	return 0;
}