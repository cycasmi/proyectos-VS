/*PUNTOS IMPORTANTES
	*Se utiliza una condición poco usual en un ciclo For.  Importante a tomar en cuenta.
	*Una cadena de caracteres puede cambiarse sin problema. (asegurarse que el espacio es suficiente).
*/

#include <iostream>
using namespace std;

int main()
{
	char string1[20], string2[] = { "cadena escrita directamente" };

	cout << "Introduzca una cadena:" << endl;
	cin >> string1;
	cout << endl << "La cadena 1 es: " << string1 << " y la cadena dos: " << string2 << endl;

	//Imprimiendo cadena de caracteres de la cual se desconoce su longitud!!!
	for (int i = 0; string1[i] != '\0' ; i++)
		cout << string1[i] << ' ';

	cout << endl;

	cout << "Cambie la cadena 1: " << endl;
	cin >> string1;
	cout << "Ahora la cadena es: " << string1 << endl;

	return 0;
}