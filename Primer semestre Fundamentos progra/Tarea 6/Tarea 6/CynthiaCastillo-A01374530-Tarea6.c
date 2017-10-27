// Nombre: Cynthia Berenice Castillo Mill�n.
// Matr�cula: A01374530
// Tarea 6

#include <stdio.h> //Carga la librer�a que permite imprimir en pantalla usando printf.
#include <stdlib.h> //En esta librer�a se encuentran las funciones rand y srand.
#include <time.h> //Permite que los n�meros sean aleatorios tomando como base el tiempo.

#pragma warning (disable:4996)//Llamada al precompilador para evitar que marque error al usar scanf.

//Funci�n que pregunta el nombre de los jugadores.
void nombres(char* a, char* b)
{
	printf("Escriba el nombre del primer jugador:\n");
	scanf("%s", a);

	printf("Escriba el nombre del segundo jugador:\n");
	scanf("%s", b);
}

//Los siguientes voids imprimen un dado con el n�mero de puntos tirado por los jugadores. Se llaman en la funci�n juegoDados
void dado0()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00   000   00    0\n");
	printf("00  0   0  00    0\n");
	printf("00  0   0  00    0\n");
	printf("00  0   0  00  00\n");
	printf("00   000   00 0\n");
	printf("0000000000000\n\n");
}

void dado_1()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00    11   00    0\n");
	printf("00 __  1   00    0\n");
	printf("00     1   00    0\n");
	printf("00     1   00  00\n");
	printf("00   1111  00 0\n");
	printf("0000000000000\n\n");
}

void dado1()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00    11   00    0\n");
	printf("00     1   00    0\n");
	printf("00     1   00    0\n");
	printf("00     1   00  00\n");
	printf("00   1111  0 0\n");
	printf("0000000000000\n\n");
}

void dado2()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  2222   00    0\n");
	printf("00 2    2  00    0\n");
	printf("00     2   00    0\n");
	printf("00   22    00  00\n");
	printf("00  222222 00 0\n");
	printf("0000000000000\n\n");
}

void dado3()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  33333  00    0\n");
	printf("00     33  00    0\n");
	printf("00   3333  00    0\n");
	printf("00     33  00  00\n");
	printf("00  33333  00 0\n");
	printf("0000000000000\n\n");
}

void dado4()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00     44  00    0\n");
	printf("00   4  4  00    0\n");
	printf("00 4444444 00    0\n");
	printf("00     44  00  00\n");
	printf("00     44  00 0\n");
	printf("0000000000000\n\n");
}

void dado5()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  555555 00    0\n");
	printf("00  55     00    0\n");
	printf("00  555555 00    0\n");
	printf("00      55 00  00\n");
	printf("00  555555 00 0\n");
	printf("0000000000000\n\n");
}

void dado6()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  666666 00    0\n");
	printf("00  66     00    0\n");
	printf("00  666666 00    0\n");
	printf("00  66  66 00  00\n");
	printf("00  666666 00 0\n");
	printf("0000000000000\n\n");
}

void dado7()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  777777 00    0\n");
	printf("00      77 00    0\n");
	printf("00     77  00    0\n");
	printf("00    77   00  00\n");
	printf("00   77    00 0\n");
	printf("0000000000000\n\n");
}

void dado8()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  888888 00    0\n");
	printf("00  88  88 00    0\n");
	printf("00  888888 00    0\n");
	printf("00  88  88 00  00\n");
	printf("00  888888 00 0\n");
	printf("0000000000000\n\n");
}

void dado9()
{
	printf("     0000000000000\n");
	printf("   00          0 0\n");
	printf(" 00          00  0\n");
	printf("0000000000000    0\n");
	printf("00  999999 00    0\n");
	printf("00  99  99 00    0\n");
	printf("00  999999 00    0\n");
	printf("00      99 00  00\n");
	printf("00  999999 00 0\n");
	printf("0000000000000\n\n");
}

void dado10()
{
	printf("00000000000000000000\n");
	printf("00  111     0000  00\n");
	printf("00   11    00  00 00\n");
	printf("00   11    00  00 00\n");
	printf("00   11    00  00 00\n");
	printf("00   11    00  00 00\n");
	printf("00   11    00  00 00\n");
	printf("00  11111   0000  00\n");
	printf("00000000000000000000\n\n");
}

void dado11()
{
	printf("00000000000000000000\n");
	printf("00  111     111   00\n");
	printf("00   11      11   00\n");
	printf("00   11      11   00\n");
	printf("00   11      11   00\n");
	printf("00   11      11   00\n");
	printf("00   11      11   00\n");
	printf("00  11111   11111 00\n");
	printf("00000000000000000000\n\n");
}

void dado12()
{
	printf("00000000000000000000\n");
	printf("00  111    22222  00\n");
	printf("00   11   2    22 00\n");
	printf("00   11       22  00\n");
	printf("00   11      22   00\n");
	printf("00   11     22    00\n");
	printf("00   11    22     00\n");
	printf("00 11111  2222222 00\n");
	printf("00000000000000000000\n\n");
}

void dado13()
{
	printf("00000000000000000000\n");
	printf("00 11111  3333333 00\n");
	printf("00   11   33   33 00\n");
	printf("00   11        33 00\n");
	printf("00   11     33333 00\n");
	printf("00   11        33 00\n");
	printf("00   11   33   33 00\n");
	printf("00 11111  3333333 00\n");
	printf("00000000000000000000\n\n");
}

void dado14()
{
	printf("00000000000000000000\n");
	printf("00   11       44  00\n");
	printf("00   11     44 4  00\n");
	printf("00   11    4  44  00\n");
	printf("00   11  44444444 00\n");
	printf("00   11       44  00\n");
	printf("00   11       44  00\n");
	printf("00  11111     44  00\n");
	printf("00000000000000000000\n\n");
}

void dado15()
{
	printf("00000000000000000000\n");
	printf("00  111   5555555 00\n");
	printf("00   11   55      00\n");
	printf("00   11   55      00\n");
	printf("00   11   5555555 00\n");
	printf("00   11        55 00\n");
	printf("00   11   55   55 00\n");
	printf("00 11111  5555555 00\n");
	printf("00000000000000000000\n\n");
}

void dado16()
{
	printf("00000000000000000000\n");
	printf("00  111   6666666 00\n");
	printf("00   11   66      00\n");
	printf("00   11   66      00\n");
	printf("00   11   6666666 00\n");
	printf("00   11   66   66 00\n");
	printf("00   11   66   66 00\n");
	printf("00 11111  6666666 00\n");
	printf("00000000000000000000\n\n");
}

void dado17()
{
	printf("00000000000000000000\n");
	printf("00  111   7777777 00\n");
	printf("00   11        77 00\n");
	printf("00   11       77  00\n");
	printf("00   11      77   00\n");
	printf("00   11     77    00\n");
	printf("00   11    77     00\n");
	printf("00 11111  77      00\n");
	printf("00000000000000000000\n\n");
}

void dado18()
{
	printf("00000000000000000000\n");
	printf("00  111   8888888 00\n");
	printf("00   11   88   88 00\n");
	printf("00   11   88   88 00\n");
	printf("00   11   8888888 00\n");
	printf("00   11   88   88 00\n");
	printf("00   11   88   88 00\n");
	printf("00 11111  8888888 00\n");
	printf("00000000000000000000\n\n");
}

//Funci�n que contiene las condiciones necesarias para imprimir el dado en pantalla.
int printdados(int dado)
{
	if (dado == 0)
		dado0();

	if (dado == -1)
		dado_1();

	if (dado == 1)
		dado1();

	if (dado == 2)
		dado2();

	if (dado == 3)
		dado3();

	if (dado == 4)
		dado4();

	if (dado == 5)
		dado5();

	if (dado == 6)
		dado6();

	if (dado == 7)
		dado7();

	if (dado == 8)
		dado8();

	if (dado == 9)
		dado9();

	if (dado == 10)
		dado10();

	if (dado == 11)
		dado11();

	if (dado == 12)
		dado12();

	if (dado == 13)
		dado13();

	if (dado == 14)
		dado14();

	if (dado == 15)
		dado15();

	if (dado == 16)
		dado16();

	if (dado == 17)
		dado17();

	if (dado == 18)
		dado18();
}

//Funci�n que imprime los puntos obtenidos en cada dado.
void impresiones(int uno, int dos, int tres)
{
	printf("\nTiro con dado de 6 caras: %d\n", uno);
	printf("\nTiro con dado de 12 caras: %d\n", dos);
	printf("\nTiro con dado de 20 caras: %d\n", tres);
}

//Funci�n que determina al ganador acorde a la puntuaci�n obtenida.
int ganador(int a, int b, char* jA, char* jB)
{
	if (a == b) //Toma los valores de sumaA y suma B (puntos del jugadorA y jugadorB respectivamente)
		printf("EMPATE...");

	if (a > b)
		printf("****  GANADOR: %s	****\n\n", jA); //jA es jugadorA

	if (a < b)
		printf("****  GANADOR: %s	****\n\n", jB);//jB es jugadorB
	return 0;
}

//Funci�n que pregunta si los jugadores desean seguir jugando y repite el ciclo si es as�.
int respuesta(char* r)
{
	printf("\n�Se desea seguir jugando?\n");
	printf("Si s�, oprima tecla s.\nSi no, oprima n\n");
	scanf("%s", r);
	printf("\n\n");
	return 0;
}

//Funci�n principal del juego de dados entre dos personas.
void juegoDados()
{
	int dado1, dado2, dado3, sumaA = 0, sumaB = 0; //Declaraci�n e inicializaci�n de variables.
	char* jugadorA, jugadorB, resp;

	do//Ciclo que permite a los jugadores seguir jugando.
	{
		nombres(&jugadorA, &jugadorB); //llamada a funci�n que solicita los nombres.

		printf("\n\n\nTiros de %s: \n\n", &jugadorA); //Tiros del primer jugador

		dado1 = 1 + rand() % 6; //Dado de 6 caras. Crea n�meros aleatorios del 1 al 6.
		dado2 = rand() % 12; //Dado de 12 caras. Crea n�meros aleatorios del 0 al 11.
		dado3 = (rand() % 20) - 1; //Dado de 20 caras. Crea n�meros aleatorios del -1 al 18.

		printdados(dado1); //Impresiones de cada dado (figura y n�mero).
		printdados(dado2);
		printdados(dado3);
		impresiones(dado1, dado2, dado3);

		sumaA = dado1 + dado2 + dado3; //Operaci�n que determina la puntuaci�n del jugadorA
		printf("\n\n*TOTAL de puntos de %s: %d\n", &jugadorA, sumaA); //Impresi�n total de los puntos de jugadorA

		printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");

		printf("\nTiros de %s: \n\n", &jugadorB); //Tiros del jugadorB

		dado1 = 1 + rand() % 6;
		dado2 = rand() % 12;
		dado3 = (rand() % 20) - 1;

		printdados(dado1); //Impresiones de cada dado.
		printdados(dado2);
		printdados(dado3);

		impresiones(dado1, dado2, dado3);

		sumaB = dado1 + dado2 + dado3; //Operaci�n que determina la puntuaci�n del jugadorA

		printf("\n\n*TOTAL de puntos de %s: %d\n\n\n", &jugadorB, sumaB);//Impresi�n total de los puntos de jugadorB

		ganador(sumaA, sumaB, &jugadorA, &jugadorB); //Llamada la funci�n que determina al ganador.

		respuesta(&resp); //Llamada a funci�n que determina si siguen o no jugando.

	} while (resp == 's'); //Segunda parte de ciclo Do while. Permite que continue el juego.

	if (resp == 'n') //Condici�n que despliega un mensaje si deciden no jugar.
		printf("\nEs una l�stima...\n\n");
}


int main()
{
	srand(time(NULL)); //Funci�n que permite que los n�meros aleatorios cambien cada vez que se corra el programa.
	juegoDados(); //Llamada a nuestra funci�n principal que realiza el juego.
	return 0;
}