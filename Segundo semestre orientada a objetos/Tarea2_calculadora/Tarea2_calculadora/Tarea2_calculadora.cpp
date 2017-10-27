//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea2, Calculadora.

#include <iostream>
using namespace std;

void impresion() //Función que despliega las opciones
{
	printf("Seleccione la operacion	que desee realizar:\n\n");
	printf("a: Suma\n");
	printf("b: Resta\n");
	printf("c: Multiplicacion\n");
	printf("d: Division\n");
	printf("e: Potencia\n");
	printf("f: Raiz cuadrada\n");
}

template <class A >
A suma(A a, A b)
{
	A res = a + b;
	cout << "Suma:" << res << "\n\n";
	return 0;
}

template <class B >
B resta(B a, B b)
{
	B res = a - b;
	cout << "Resta:" << res << "\n\n";
	return 0;
}

template <class C >
C multiplicacion(C a, C b)
{
	C res = a * b;
	cout << "Multiplicacion:" << res << "\n\n";
	return 0;
}

template <class D >
D division(D a, D b)
{
	D res = a/b;
	cout << "Division:" << res << "\n\n";
	return 0;
}

template <class E >
E potencia(E a, E b)
{
	E res = 1;
	for (E x = b; x >= 1; x--)
	{
		res *= a;
	}
	cout << "Potencia:" << res << "\n\n";
	return 0;
}

template <class F >
F raiz(F a)
{
	F res = a, t = 0;
	while (t != res)
	{
		t = res;
		res = (a / res + res) / 2;
	}

	cout << "Raiz:" << res << "\n\n";
	return 0;
}

template <class X>
X calculadora(X z) //Funcion que realiza un ciclo para continuar calculando. Recibe la seleccion del usuario y los numeros a usar.
{
	char eleccion, continuar;
	X x, y;

	do
	{
		impresion();
		cin >> eleccion;

		if (eleccion != 'f')
		{
			cout << "Introduzca su primer numero:";
			cin >> x;
			cout << "Introduzca su segundo numero:";
			cin >> y;

			if (eleccion == 'a')
				suma(x, y);

			if (eleccion == 'b')
				resta(x, y);

			if (eleccion == 'c')
				multiplicacion(x, y);

			if (eleccion == 'd')
				division(x, y);

			if (eleccion == 'e')
				potencia(x, y);

		}

		else
		{
			cout << "Introduzca el numero:";
			cin >> x;

			raiz(x);
		}

		cout << "Desea realizar otra operacion?\n Si es asi, presione s.\n\n";
		cin >> continuar;

	} while (continuar == 's');
		
	return 0;
}

int main()
{
	calculadora(4.9);
	return 0;
}