/*PUNTOS IMPORTANTES
	*No olvidar que para un Bubblesort se necesitan dos ciclos anidados. Uno para revisar que un número es menor al siguiente y otro para
	ir acomodando la totalidad de los valores en ese orden.
*/

#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 10;
	int array1[arraySize] = { 2, 6, 8, 4, 3, 10, 9, 1, 5, 7 };
	int temp;

	for (int i = 0; i < arraySize; i++)
		cout << array1[i] << " ";

	cout << endl;

	for (int revisiones = 0; revisiones < (arraySize-1); revisiones ++)
	{
		for (int i = 0; i < (arraySize - 1); i++)
		{
			if (array1[i] > array1[i + 1])
			{
				temp = array1[i + 1];
				array1[i + 1] = array1[i];
				array1[i] = temp;
			}
		}
	}

	for (int i = 0; i < arraySize; i++)
		cout << array1[i] << " ";

	cout << endl;

	return 0;
}