#include <iostream>
using namespace std;

void impresion() //Función que despliega las opciones
{
	printf("\n\nSeleccione la operacion	que desee realizar:\n\n");
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
	cout << "Suma:" << res << "\n";
	return 0;
}

template <class B >
B resta(B a, B b)
{
	B res = a - b;
	cout << "Resta:" << res << "\n";
	return 0;
}

template <class C >
C multiplicacion(C a, C b)
{
	C res = a * b;
	cout << "Multiplicacion:" << res << "\n";
	return 0;
}

template <class D >
D division(D a, D b)
{
	D res = a / b;
	cout << "Division:" << res << "\n";
	return 0;
}

template <class E >
E potencia(E a, E b)
{
	E res = 1;
	for (E x = b; x >= 0; x--)
	{
		res *= a;
	}
	cout << "Potencia:" << res << "\n";
	return 0;
}

template <class S >
int calculadora(char ele, S a, S b)
{
	switch (ele = getchar()) //recibe valor eleccion (opcion en la calculadora que eligio el usuario)
	{

	case 'A': //Caso que considera la suma
	case 'a':
		suma(a, b);
		break;

	case 'B'://Caso que considera la resta
	case 'b':
		printf("RESTA\n");
		resta(a, b);
		break;

	case 'C': //Caso que considera la multiplicacion
	case 'c':
		printf("MULTIPLICACION\n");
		multiplicacion(a, b);
		break;

	case 'D': //Caso que considera la division
	case 'd':
		division(a, b);
		break;

	case 'E': //Caso que considera la potencia
	case 'e':
		potencia(a, b);
		break;

		/*case 'F': //Caso que considera el modulo
		case 'f':
		raiz();
		break;*/

	default: //Caso que considera que el usuario introduzca otro caracter
		printf("Caracter no reconocido.\n");
		printf("Por favor, seleccione alguna de las letras anteriores para realizar operacion (A - L).\n\n");
		break;
	}
}

int main()
{
	impresion();
	char eleccion = getchar();
	calculadora(eleccion);

	return 0;
}