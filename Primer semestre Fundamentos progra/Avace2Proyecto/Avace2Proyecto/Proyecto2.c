//Nombre: Cynthia B. Castillo Millán.
//Matrícula: A01374530
//Segundo Avance de Proyecto.

/*El siguiente codigo,  además de crear un arreglo a manera de baraja, revolver los naipes y detectar si hay
o no escalera numerica en las cartas dadas al jugador (tal como especificaban las instrucciones para el
segundo avance de proyecto) detecta también todas las demas jugadas (que no involucran los palos).

En adicion a lo anterior, tambien tiene un ciclo que permite seguir jugando y partes del codigo
comentadas con el fin de comprobar facilmente que el programa funciona correctamente.*/

/*Librerias: stdio para uso de printf; stdlib para uso de rand y srand; time para que los numeros sean aleatorios
tomando como base el tiempo; #pragma warning: llamada al precompilador para evitar el error que produce scanf en Windows.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

/*Constantes a través del programa que facilitan cambios de manera rápida.
CARDSIZE: número de cartas en la baraja (se agrega una posicion mas con la finalidad de que coincidan con el numero de carta).
FREQ: frecuencia de aparicion de cada numero de carta. (Por la misma razon que el anterior, se le agrega una posicion mas).
MANO: numero de cartas que se le dan al jugador.*/
#define CARDSIZE 53
#define FREQ 14
#define MANO 5

/*Funcion que determina el tipo de mano que obtiene el jugador. Recibe como parametro el arreglo de cartas dadas al jugador (mano)*/
void manos(int a[])
{
	int i;//Variable unica usada en el ciclo (funciona como contador) y en todas las condiciones (como numero de posicion en arreglo). 

	for (i = 0; i < MANO; i++) //Ciclo que permite revisar todas las cartas del jugador.
	{
		//Condicion que determina si el jugador tiene escalera numerica y menciona los parametros de esta (ej. de 1 - 5 ).
		if (i == 0 && (a[i] + 1) == a[1] && (a[i] + 2) == a[2] && (a[i] + 3) == a[3] && (a[i] + 4) == a[4])
		{
			printf("Hay escalera numérica del %d al %d\n\n", (a[i]), a[i + 4]);
			break;
		}
		//Condicion que determina si hay Poker.
		if (i <= 1 && a[i] == a[i + 3])
		{
			printf("Póker\n");
			break;
		}
		//Condicion que determina si hay Full.
		if (a[0] == a[2] && a[3] == a[4]){
			printf("Full\n");
			break;
		}
		//Condicion que determina si hay Full (en un orden distinto).
		if (a[0] == a[1] && a[2] == a[4]){
			printf("Full\n");
			break;
		}
		//Condicion que determina si hay Tercia.
		if (i <3 && a[i] == a[i + 2])
		{
			printf("Tercia\n");
			break;
		}
		//Condicion que determina si hay Doble Par.
		if (i < 2)
		{
			if (a[i] == a[i + 1] && a[3] == a[4])
			{
				printf("Doble par\n");
				break;
			}
			if (a[0] == a[1] && a[2] == a[3])
			{
				printf("Doble par\n");
				break;
			}
		}
		//Condicion que determina si hay un Par.
		if (i <= 3 && a[i] == a[i + 1])
		{
			printf("Par\n");
			break;
		}
	}
	//Condicion fuera del ciclo que imprime la carta con el mayor valor.
	if (i == MANO)
	{
		as(a);
		printf("Carta mayor: %d\n", a[4]);
	}
}


//Bubblesort: ordenamiento de los datos del arreglo mano (cartas del jugador).
void bubblesort(int arrm[])
{
	int a, b, c = 0;

	for (a = 0; a < MANO; a++)
	{
		for (b = 1; b < (5 - a); b++)
		{
			if (arrm[b - 1] > arrm[b])
			{
				c = arrm[b - 1];
				arrm[b - 1] = arrm[b];
				arrm[b] = c;
			}
		}
	}
}

//Funcion que, en caso de corrida que involucre el as, convierta el 1 en 14, para asi formalarla. Parametro: mano
void asCo(int arrm[])
{
	int i;
	for (i = 0; i < MANO; i++)
	{
		if (arrm[i] == 1)
		{
			if (arrm[1] == 10 && arrm[2] == 11 && arrm[3] == 12 && arrm[4] == 13)
			{
				arrm[i] = 14;
				bubblesort(arrm);
				break;
			}
		}
	}

}

//Funcion que convierte el As en 14. Parametro: mano
int as(int arrm[])
{
	int i;
	for (i = 0; i < MANO; i++)
	{
		if (arrm[i] == 1)
		{
			arrm[i] = 14;
			bubblesort(arrm);
			break;
		}
	}
	return arrm;
}

//Funcion que crea las cartas del juego en orden aleatorio. j es el contador, c es el arreglo cartas, f es la frecuencia que cada valor aparece.
void cartas(int j, int c[], int f[])
{
	while (j < CARDSIZE) //ciclo que permite crear las 53 cartas.
	{
		c[j] = 1 + rand() % 13;  //generador aleatorio de cartas
		++f[c[j]]; //contador que aumenta en uno  la frecuencia del valor de la carta que aparezca.

		if (f[c[j]] == MANO) //condicion que revisa que ninguna carta se cree mas de 4 veces.
		{
			do //ciclo que reduce el numero de la frecuencia y crea otra carta que aun no tenga el valor de 4.
			{
				--f[c[j]];
				c[j] = 1 + rand() % 13;
				++f[c[j]];
			} while (f[c[j]] == MANO);
		}
		j++;
	}
}

//Funcion principal que imprime las cosas en pantalla y tiene la mayor parte de las funciones (y todos los arreglos utilizados)
void juego()
{
	int cards[CARDSIZE] = { 0 }, frecuencia[FREQ] = { 0 }, mano[MANO] = { 0 };
	int i = 1;

	cartas(i, cards, frecuencia); //Llamada a funcion que crea las cartas

	//Ciclo que imprime las cartas en desorden.
	for (i = 1; i < CARDSIZE; i++)
		printf("Carta %d: %d\n", i, cards[i]);

	//Funcion que imprime la frecuencia de aparicion de las cartas y comprueba que la baraja este completa y sin valores repetidos.
	//****************************************************
	printf("\n\n%s%13s\n\n", "Numero de carta", "Frecuencia");
	for (i = 1; i < FREQ; i++)
		printf("%8d%13d\n", i, frecuencia[i]);


	/*Ciclo que da 5 cartas aleatorias al jugador. (En las instrucciones para el proyecto se especificaba asi, aunque
	bien pudieron tomarse las primeras 5 de la baraja*/
	for (i = 0; i < MANO; i++)
		mano[i] = cards[rand() % 52 + 1];

	//Impresion de las cartas dadas al jugador en desorden.
	printf("\n\nCartas del jugador:\n\n");
	for (i = 0; i < MANO; i++)
		printf("%d  ", mano[i]);

	//***********************************
	//Arreglo con el que puede facilmente comprobar que el programa funciona correctamente:

	//int arreg[5] = { 11, 12, 13, 10, 1 };

	//*****Si se desea probar, deben cambiarse los parametros indicados.

	bubblesort(mano); //bubblesort(arreg);

	asCo(mano); //as(arreg);

	printf("\n\nCartas acomodadas del jugador:\n\n");
	for (i = 0; i < MANO; i++)
		printf("%d  ", mano[i]); //printf("%d  ", arreg[i];
	printf("\n\n");

	manos(mano); //manos(arreg);

}

//Funcion que permite continuar jugando las veces que se desee.
void continuarJugando()
{
	char continuar; //Variable que guarda el valor de la respuesta del jugador.

	//Ciclo que permite continuar jugando o no segun la respuesta obtenida
	do
	{
		juego(); //llama a la funcion principal

		printf("\nDesea continuar jugando?\n");
		printf("(Presione S si es asi. Sino, presione otra letra).\n");
		scanf("%s", &continuar); //Recibe el valor introducido por el usuario
		printf("\n\n");

		switch (continuar) //switch que evita que el programa falle y revisa que se introduzca el valor necesario para continuar jugando
		{
		case 'S':
		case 's':
			continuar = 'S';
			break;
		}

	} while (continuar == 'S');

	printf("\nFin del juego.\n");
}


int main()
{
	srand(time(NULL)); //Permite que se creen los numeros de forma aleatoria.
	continuarJugando(); //Llamada a la funcion que permite continuar jugando y contiene el juego.
	return 0;
}