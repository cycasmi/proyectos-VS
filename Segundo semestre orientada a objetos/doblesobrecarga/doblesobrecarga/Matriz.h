#pragma once
#include <iostream>
using namespace std;

template <class T>
class matriz
{
	T** data;
	int row;
	int col;

	class Inner
	{
		T* array;
	public:

		Inner(){}
		Inner(T* array2)
		{
			array = array2;
		}

		T& operator[](int index)
		{
			return array[index];
		}
	};
public:

	matriz()
	{
		data = new T*[5];
		for (int i = 0; i < 5; i++)
		{
			//en esta parte ya no es necesario ponerle * antes de T pork ya tengo los corchetes antes de definir
			data[i] = new T[5];
			for (int j = 0; j < 5; j++)
			{
				data[i][j] = 1;
			}
		}
	}

	Inner operator[](int index)
	{
		//devuelveme una instancia en esa posición.
		return Inner(data[index]);
	}

	void print()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}

};

//El primer subscript te devuelve una clase y la segunda clase te devuelve un

