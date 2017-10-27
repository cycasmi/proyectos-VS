//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea 4, ejercicio 2.

#include <iostream>
using namespace std;

void maxMinShort(short *max, short *min)
{
	*max += 1;
	*min =  *max + 1;
}

void maxMinInt(int *max, int *min)
{
	*max += 1;
	*min = *max + 1;
}

void maxMinLong(long *max, long *min)
{
	*max += 1;
	*min = *max + 1;
}


int main()
{
	short *maxShort = new short;
	*maxShort = 32766;
	short *minShort = new short;
	*minShort = 0;

	int *maxInt = new int;
	*maxInt = 2147483646;
	int *minInt = new int;
	*minInt = 0;

	//http://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Referencia
	long *maxLong = new long;
	*maxLong = 2147483646;
	long *minLong = new long;
	*minLong = 0;

	maxMinShort(maxShort, minShort);
	cout << "Valor maximo Short:" << *maxShort << endl << "Valor minimo Short:" << *minShort << endl;

	maxMinInt(maxInt, minInt);
	cout << "Valor maximo Int:" << *maxInt << endl << "Valor minimo Int:" << *minInt << endl;

	maxMinLong(maxLong, minLong);
	cout << "Valor maximo Long:" << *maxLong << endl << "Valor minimo Long:" << *minLong << endl << endl;

	return 0;
}