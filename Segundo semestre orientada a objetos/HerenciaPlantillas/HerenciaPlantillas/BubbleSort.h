#include "Sort.h"

template <class T>
class BubbleSort : public Sort<T>
{
public:
	T* sort(T* o) = 0; //Si modifico el contenido, no necesito el &, sin embargo, si necesito modificar el apuntador ah� s�.

	BubbleSort();
	~BubbleSort();
};

template <class T>
T* BubbleSort::sort(T* o)
{
	//aqu� va lo de bubble sort
	/*
	Como aqu� ir�a algo como
	if (algo > otroAlgo)
	Ser�a necesario sobrecargar el > <. Cosa que s�lo funciona en c++
	as� que podr�a hacerse una clase para que compare las dos clases.

	Comparable
	compareTo(obj a, obj b) = 0;
	
	MayorNumeros
	blool compareTo(n1, n1)
	{
	return return n1.getVol < n2.getvol
	}
	*/
}