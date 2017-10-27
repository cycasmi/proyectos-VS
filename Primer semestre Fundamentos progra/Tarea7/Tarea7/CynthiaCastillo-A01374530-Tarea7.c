// Nombre: Cynthia Berenice Castillo Millán.
// Matrícula: A01374530
// Tarea 7

#include <stdio.h> //biblioteca que permite imprimir
#include <math.h> //biblioteca que contiene varias formulas matematicas
#pragma warning (disable:4996) //Llamada al precompilador para evitar el error con scanf

void impresion() //Función que despliega las opciones
{
	printf("\n\nSeleccione la operacion	que desee realizar:\n\n");
	printf("a: Suma\n");
	printf("b: Resta\n");
	printf("c: Multiplicacion\n");
	printf("d: Division\n");
	printf("e: Potencia\n");
	printf("f: Modulo\n");
	printf("g: Raiz cuadrada (del 1er y el 2do número)\n");
	printf("h: Seno (en radianes)\n");
	printf("i: Coseno (en radianes)\n");
	printf("j: Tangente (en radianes)\n");
	printf("k: Exponencial\n");
	printf("l: Logaritmo\n");
}

void operacionesAL(char ele, float res1, float res2, float u, float d) //funcion que calcula todas las operaciones.
{
	switch (ele = getchar()) //recibe valor eleccion (opcion en la calculadora que eligio el usuario)
	{

	case 'A': //Caso que considera la suma
	case 'a':
		printf("SUMA\n");
		res1 = u + d;
		printf("%.3f + %.3f = %.3f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'B'://Caso que considera la resta
	case 'b':
		printf("RESTA\n");
		res1 = u - d;
		printf("%.3f - %.3f = %.3f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'C': //Caso que considera la multiplicacion
	case 'c':
		printf("MULTIPLICACION\n");
		res1 = u * d;
		printf(" %.3f * %.3f = %.4f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'D': //Caso que considera la division
	case 'd':
		printf("DIVISION\n");
		res1 = u / d;
		printf(" %.3f / %.3f = %f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'E': //Caso que considera la potencia
	case 'e':
		printf("POTENCIA\n");
		res1 = pow(u, d);
		printf(" %.3f ^ %.3f = %.3f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'F': //Caso que considera el modulo
	case 'f':
		printf("MODULO\n");
		res1 = fmod(u, d);
		printf(" %.3f modulo de %.3f = %.3f\n\n", u, d, res1);
		res1 = 0;
		break;

	case 'G': //Caso que considera la raiz cuadrada
	case 'g':
		printf("RAIZ CUADRADA\n");
		res1 = sqrt(u);
		res2 = sqrt(d);
		printf("sqrt( %.3f ) = %f\n\n", u, res1);
		printf("sqrt( %.3f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	case 'H': //Caso que considera el seno en radianes
	case 'h':
		printf("SENO(radianes)\n");
		res1 = sin(u);
		res2 = sin(d);
		printf("sin( %.4f ) = %f\n\n", u, res1);
		printf("sin( %.4f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	case 'I': //Caso que considera el coseno en radianes
	case 'i':
		printf("COSENO(radianes)\n");
		res1 = cos(u);
		res2 = cos(d);
		printf("cos( %.3f ) = %f\n\n", u, res1);
		printf("cos( %.3f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	case 'J': //Caso que considera la tangente en radianes
	case 'j':
		printf("TANGENTE(radianes)\n");
		res1 = tan(u);
		res2 = tan(d);
		printf("tan( %.3f ) = %f\n\n", u, res1);
		printf("tan( %.3f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	case 'K': //Caso que considera el exponencial
	case 'k':
		printf("EXPONENCIAL\n");
		res1 = exp(u);
		res2 = exp(d);
		printf("exp( %.3f ) = %f\n\n", u, res1);
		printf("exp( %.3f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	case 'L': //Caso que considera el logaritmo
	case 'l':
		printf("LOGARITMO (base 10)\n");
		res1 = log10(u);
		res2 = log10(d);
		printf("log10( %.3f ) = %f\n\n", u, res1);
		printf("log10( %.3f ) = %f\n\n", d, res2);
		res1 = 0;
		res2 = 0;
		break;

	default: //Caso que considera que el usuario introduzca otro caracter
		printf("Caracter no reconocido.\n");
		printf("Por favor, seleccione alguna de las letras anteriores para realizar operacion (A - L).\n\n");
		break;
	}
}

void calcular()//Función que da las opciones de continuar calculando o terminar
{
	printf("Si de desea hacer otra operacion, presione 'n' \n");
	printf("Si ha terminado de realizar operaciones y desea salir del programa, presione 'f' \n");
}

void calculadora() //Función principal de la calculadora
{
	char eleccion, continuar;
	float uno = 0, dos = 0, resultado1 = 0, resultado2 = 0;
	int contador = 1;

	do //ciclo que conseguir los números (confirmando que sean menores o iguales a 1000)
	{
			if (uno > 1000 || dos > 1000) //condición para confirmar que el número sea menor o igual a 1000
			{
				printf("\nERROR: LOS NUMEROS INTRODUCIDOS SON MUY GRANDES.\n"); //Frase que despliega al insertarse un número mayor a 1000
				printf("(Pruebe con numeros menores a 1000)\n\n\n");
			}

			printf("Escriba el primer numero:\n"); //Las siguientes ´líneas preguntan los numeros a usar.
			printf("(Puede ser real)\n");
			scanf("%f", &uno);
			printf("\nEscriba el segundo numero:\n");
			printf("Puede ser real)\n");
			scanf("%f", &dos);

		} while (uno > 1000 || dos > 1000); //condición para confirmar que el número sea menor o igual a 1000

		impresion(); //llamada a función que da las opciones
		eleccion = getchar(); //Eleccion del usuario

		do //ciclo que permite continuar calculando
		{
			operacionesAL(&eleccion, resultado1, resultado2, uno, dos); //Llamada a función que calcula las operaciones
			calcular(); //función que da la opción de seguir calculando
			scanf("%s",&continuar); //pregunta al usuario para saber si desea seguir calculando
	} while (continuar == 'n'); 

		if (continuar == 'f')
			printf("Cerrando aplicacion.");
}


int main()
{
	calculadora(); //Llamada a funcion principal de la calculadora.
	return 0;
}
