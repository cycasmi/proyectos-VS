#pragma once
#include <iostream>
using namespace std;

template <class T>
class Reglas
{
public:
	int size;
	int sizze;
	int jj;
	T *arreglo;
	T *arreglo2;
	T *arreglo3;
	T letra;

	Reglas();
	Reglas(int n);
	Reglas(const Reglas& original);

	~Reglas();

	void notFollow(T letra);
	void reduce(T letra);
	void print();
};

template <class T>
Reglas<T>::Reglas()
{
	cout << "Introduzca el numero de reglas\n";
	cin >> size;
	
	arreglo = new T[size];

	for (int i = 0; i < size; i++)
	{
		cout << "\nIntroduzca la regla numero " << i+1 << ":";
		cin >> arreglo[i];
	}
}

template <class T>
Reglas<T>::Reglas(int n)
{
	this->size = n;

	for (int i = 0; i < size; i++)
	{
		cout << "\nIntroduzca la regla numero " << i + 1 << ":";
		cin >> arreglo[i];
	}
}

template <class T>
void Reglas<T>::notFollow(T letra)
{
	this->letra = letra;

	arreglo2 = new T[size];
	
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (arreglo[i] == letra)
		{
			cout << arreglo[i + 1];

			arreglo2[j] = arreglo [i + 1];
			j++;
		}
	}

	jj = j;

}

template <class T>
void Reglas<T>::reduce(T letra)
{
	this->letra = letra;

	int k = 0;

	cout << "Introduzca el numero de elementos\n";
	cin >> sizze;

	arreglo3 = new T[sizze];

	for (int i = 0; i < sizze; i++)
	{
		cout << "\nIntroduzca el elemento numero " << i + 1 << ":";
		cin >> arreglo3[i];
	}


	for (int i = 0; i < (sizze-2); i++)
	{
		for (int m = 0; m < jj; m++)
		{
			if (arreglo3[i] == arreglo2[m])
			{
				for (int n = 0; n < sizze; n++)
				{
					arreglo3[n] = arreglo3[n + 1];
				}
				sizze --;
			}
		}
	}

	for (int i = 0; i < sizze; i++)
	{
		cout << arreglo3[i];
	}

}

template <class T>
void Reglas<T>::print()
{
	for (int i = 0; i < size; i++)
	{
	cout << arreglo[i] << endl;
	}
}

template <class T>
Reglas<T>::~Reglas()
{
	delete[]arreglo;
}