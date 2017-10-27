/*PUNTOS IMPORTANTES
	*No es lo mismo si le pongo += a sólo el +. Para comprobarlo, hacer la prueba en papel. (el valor total usado al imprimir sí es el correcto
	pero el valor dentro del arreglo permanece igual, es decir, 0).
	
	*El arreglo Automático deja de reinicializar sus valores si es usado al llamarse desde el main en una función. (Para ver la diferencia, usar el
	código comentado debajo).

	*Al usar el estatic, aunque se inicialice dentro de la función, al llamarla no se modifican los últimos valores que que tuvo.
	Es decir, no vuelve a inicializarse como 1, 2 y 3, como pasaría con una función habitual.
*/

#include <iostream>
using namespace std;

void staticArrayInit()
{
	//Si a un arreglo estático como el siguiente no se le pone valor alguno, se inicializan los valores en 0. Sólo la PRIMERA vez.
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
	cout << "Primera llamada a cada función:\n\n";
	staticArrayInit();
	cout << "\n\n";
	automaticArrayInit();

	cout << "\n\nSegunda llamada a cada función:\n\n";
	staticArrayInit();
	cout << "\n\n";
	automaticArrayInit();

	return 0;
}


//*********************************************************************************************************************
/*
void staticArrayInit(int arr1[])
{
//Al ser un arreglo estático y no ponersele valor alguno, se inicializan los valores en 0.

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

cout << "Primera llamada a cada función:\n\n";
staticArrayInit(array1);
cout << "\n\n";
automaticArrayInit(array2);

cout << "\n\nSegunda llamada a cada función:\n\n";
staticArrayInit(array1);
cout << "\n\n";
automaticArrayInit(array2);

return 0;
}

*/