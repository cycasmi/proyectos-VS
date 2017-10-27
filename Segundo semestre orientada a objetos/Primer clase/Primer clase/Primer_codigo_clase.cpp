//Programaci�n gen�rica (PLANTILLAS) 20 enero 2015
/*#include <iostream>
using namespace std;

//Defino mi tipo de dato gen�rico, y �se es el que uso.
template < class T >

T suma(T a, T b)
{
	T valor;
	cout << "Hola " << a << " " << b << "\n";

	valor = a + b;

	cout << "\nValor: " << valor << "\n";
	return valor;
}

int main()
{
	suma(5.5,3.4);
	return 0;
};*/

//*****************************************************************************************************************************************


//Especializaci�n de platillas. 22 enero 2015
/*#include <iostream>
using namespace std;

template < class T>
bool mayor(T a, T b)
{
	return (a > b);
}

void uno()
{
	//int *d = new int[5]; //de esta forma se hace de forma din�mica
	int *a = new int; //a s�lo guarda la direcci�n donde se guardar� el valor, no el valor en s�.
	*a = 5; //Guarda el valor 5 a esa direcci�n

	cout << *a << "\n"; //Se salta lo de la direcci�n e imprime el valor que guarda �sta.
	cout << a << "\n\n"; //imprime la direcci�n que guarda a.

}

int main()
{
	uno();
	return 0;
}*/

//*****************************************************************************************************

//Apuntadores. 27 enero 2014
/*#include <iostream>
using namespace std;

int main()
{
	//aritm�tica de apuntadores.
	int *a = new int;
	*a = 5;
	cout << *a << "\n" << &a << "\n\n";

	int *b = new int[3];
	*b = 8;
	*(b + 1) = 7;
	*b += 1;
	
	for (int i = 0; i < 3; i++)
	{
		cout << *(b + i) << "\n";
	}

	b++;
	cout << *b << "\n Ahora imprime el contenido de b+1 ya que aumentamos el apuntador. Ahora apunta a la siguiente direcci�n\n";
	b--;

	//As� s�lo borrar�a el apuntador a esos espacios de memoria mas no liberar�a el espacio.
	// delete[]b;
	
	int integers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130 };
	int *pointer;
	int n;
	pointer = integers;

	n = *pointer; // a) El valor de n es  10
	cout << n << "a\n";
	n = *(pointer); // b) El valor de n es 10
	cout << n << "b\n";
	n = *(pointer + 1); // c) El valor de n es 30
	cout << n << "c\n";
	n = *pointer++; // d) El valor de n es 10
	cout << n << "d\n";
	n = *(pointer++); // e) El valor de n es 10 
	cout << n << "e\n";
	n = *pointer += 1; // f) El valor de n es 11
	cout << n << "f\n";
	n = *++pointer; // g) El valor de n es 20
	cout << n << "g\n";
	n = (*pointer + 1); // h) El valor de n es 11
	cout << n << "h\n";
	n = *(++pointer); // i) El valor de n es 20
	cout << n << "i\n";
	n = (*pointer) + 1; // j) El valor de n es 
	cout << n << "j\n";
	n = *pointer; // k) El valor de n es ___________________ 
	cout << n << "k\n";
	n = *(pointer + 1); // l) El valor de n es ___________________ 
	cout << n << "l\n";
	n = *(pointer++); // m) El valor de n es __________________ 
	cout << n << "m\n";
	n = *pointer + 1; // n) El valor de n es ___________________ 
	cout << n << "n\n";

	n = *pointer++; // �) El valor de n es ___________________
	cout << n << "�\n";

	n = *pointer;
	cout << n << "o\n";

	return 0;
}

/*

#include <time.h>
#include <stdlib.h>

srand(time(NULL));

rand()%10;

*/

//********************************************************************************************************************
/*//30 de enero
//Apuntadores y 

#include <iostream>
using namespace std;

void funcion(int *a)
{
	*a += *a;
}

int main()
{
	//Pasar por referencia
	int a = 5;

	funcion(&a);

	cout << a << endl;
}

//Pasar por direcci�n
/*void funcion(int &a)
{
a += a;
}

int main()
{
int a = 5;

funcion(a);

cout << a << endl;

}*/

//***************************************************************************************************************************

