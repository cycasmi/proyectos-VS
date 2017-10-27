#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Matriz
{
private:
	int *contenedor;
	int** matriz;
	int col;
	int row;

public:
	Matriz();
	Matriz(int n);
	Matriz(int m, int n);

	int fillRandom();
	int fillRandom(int n);
	int fillUser();
	int upper();
	int lower();
	int transpose();
	void print();

	int getCol();
	int getRow();

	Matriz operator +(Matriz n);
	void operator ~();
	void operator ^(int n);
	int* operator [](int a);
	void operator ()(int n);
	friend ostream & operator <<(ostream & os, Matriz & a);
	friend istream & operator >>(istream & is, Matriz & a);

};

Matriz::Matriz()
{
	col = 1;
	row = 1;
	matriz = new int*[col];
	matriz[0] = new int[row];
	/*matriz[0][0] = 0;
	cout << matriz[0][0];*/
}

Matriz::Matriz(int n)
{
	col = n;
	row = n;
	matriz = new int*[row];
	for (int i = 0; i < col; i++)
	{
		matriz[i] = new int[row];
	}

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i] [j] = 1;
			cout << matriz[i][j]<< "	";
		}
		cout << endl;
	}*/
	
}

Matriz::Matriz(int m, int n)
{
	col = m;
	row = n;
	matriz = new int*[row];
	for (int i = 0; i < row; i++)
	{
		matriz[i] = new int[col];
	}

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i][j] = 1;
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}*/
}

int Matriz::fillRandom()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i][j] = rand();
			//cout << matriz[i][j] << "	";
		}
		//cout << endl;
	}
	//cout << endl;
	return 0;
}

int Matriz::fillRandom(int n)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i][j] = (rand() % (n-1))+1;
			//cout << matriz[i][j] << "	";
		}
		//cout << endl;
	}
	return 0;
}

int Matriz::fillUser()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Inserte valor:\n";
			cin >> matriz[i][j];
		}
	}

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}*/
	return 0;
}

int Matriz::upper()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j < i)
				matriz[i][j] = 0;
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}
	return 0;
}

int Matriz::lower()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i < j)
				matriz[i][j] = 0;
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}
	return 0;
}

int Matriz::transpose()
{
	contenedor = new int[(row*col)];
	int a = 0;
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			contenedor[a] = matriz[i][j];
			//cout << contenedor[a] << "	";
			a++;
		}
	}
	//cout << endl << endl;

	a = 0;

	int **newMatriz = new int*[col];
	for (int i = 0; i < row; i++)
	{
		newMatriz[i] = new int[col];
	}

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			newMatriz[j][i] = contenedor[a];
			a++;
			cout << newMatriz[j][i] << "	";
		}
		cout << endl;
	}

	return 0;
}

Matriz Matriz::operator +(Matriz n)
{
	Matriz matriz2(col, row);
	if ((n.getCol() != col) || (n.getRow() != row))
		cout << "No fue posible realizar suma." << endl;
	else
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				matriz2[i][j] = (matriz[i][j] + n[i][j]);
				cout << matriz2[i][j] << "	";
			}
			cout << endl;
		}
	}
		
	return matriz2;
}

void Matriz::operator ~()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i][j] *= (-1);
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}
}

void Matriz::operator ^(int n)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matriz[i][j] = pow (matriz[i][j], n);
			cout << matriz[i][j] << "	";
		}
		cout << endl;
	}
}

int Matriz::getCol()
{
	return col;
}

int Matriz::getRow()
{
	return row;
}

ostream & operator <<(ostream & os, Matriz & a)
{
	for (int i = 0; i < a.getRow(); i++)
	{
		for (int j = 0; j < a.getCol(); j++)
		{
			os << a[i][j] << "	";
		}
		os << "\n";
	}

	return os;
}

istream & operator >>(istream & is, Matriz & a)
{
	for (int i = 0; i < a.getRow(); i++)
	{
		for (int j = 0; j < a.getCol(); j++)
		{
			cout << "Inserte valor:\n";
			is >> a[i][j];
		}
	}

	return is;
}

int* Matriz::operator [](int a)
{
	return matriz[a];
}

void Matriz::operator ()(int n)
{
	for (int i = 0; i < row; i++)
	{
	for (int j = 0; j < col; j++)
		matriz[i][j] = (matriz[i][j] * n);
	}
}