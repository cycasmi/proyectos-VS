/*PUNTOS IMPORTANTES
	*No es lo mismo si le pongo += a s�lo el +. Para comprobarlo, hacer la prueba en papel. (el valor total usado al imprimir s� es el correcto
	pero el valor dentro del arreglo permanece igual, es decir, 0).
	
	*El arreglo Autom�tico deja de reinicializar sus valores si es usado al llamarse desde el main en una funci�n. (Para ver la diferencia, usar el
	c�digo comentado debajo).

	*Al usar el estatic, aunque se inicialice dentro de la funci�n, al llamarla no se modifican los �ltimos valores que que tuvo.
	Es decir, no vuelve a inicializarse como 1, 2 y 3, como pasar�a con una funci�n habitual.
*/

#include <iostream>
using namespace std;

void staticArrayInit()
{
	//Si a un arreglo est�tico como el siguiente no se le pone valor alguno, se inicializan los valores en 0. S�lo la PRIMERA vez.
	static int array1[3] = { 1, 2, 3 };

	cout << "\nValores al entrar al staticArray:\n";

	for (int i = 0; i < 3; i++)
		cout << "array1[" << i << "] = " << array1[i] << " ";

	cout << "\nValores al salir del staticArray:\n";

	for (int i = 0; i < 3; i++)
		cout << "array1[" << i << "] = " << (array1[i] += 5) << " ";
	
}

void automaticArrayInit()
{
	int array2[3] = { 1, 2, 3 };

	cout << "\nValores al entrar al automaticArray:\n";

	for (int i = 0; i < 3; i++)
		cout << "array2[" << i << "] = " << array2[i] << " ";

	cout << "\nValores al salir del automaticArray:\n";

	for (int i = 0; i < 3; i++)
		cout << "array2[" << i << "] = " << (array2[i] += 5) << " ";

}

int main()
{
	cout << "Primera llamada a cada funci�n:\n\n";
	staticArrayInit();
	cout << "\n\n";
	automaticArrayInit();

	cout << "\n\nSegunda llamada a cada funci�n:\n\n";
	staticArrayInit();
	cout << "\n\n";
	automaticArrayInit();

	return 0;
}


//*********************************************************************************************************************
/*
void staticArrayInit(int arr1[])
{
//Al ser un arreglo est�tico y no ponersele valor alguno, se inicializan los valores en 0.

cout << "\nValores al entrar al staticArray:\n";

for (int i = 0; i < 3; i++)
cout << "array1[" << i << "] = " << arr1[i] << " ";

cout << "\nValores al salir del staticArray:\n";

for (int i = 0; i < 3; i++)
cout << "array1[" << i << "] = " << (arr1[i] += 5) << " ";

}

void automaticArrayInit(int arr2[])
{

cout << "\nValores al entrar al automaticArray:\n";

for (int i = 0; i < 3; i++)
cout << "array2[" << i << "] = " << arr2[i] << " ";

cout << "\nValores al salir del automaticArray:\n";

for (int i = 0; i < 3; i++)
cout << "array2[" << i << "] = " << (arr2[i] += 5) << " ";

}

int main()
{
static int array1[3];
int array2[3] = { 1, 2, 3 };

cout << "Primera llamada a cada funci�n:\n\n";
staticArrayInit(array1);
cout << "\n\n";
automaticArrayInit(array2);

cout << "\n\nSegunda llamada a cada funci�n:\n\n";
staticArrayInit(array1);
cout << "\n\n";
automaticArrayInit(array2);

return 0;
}

*/