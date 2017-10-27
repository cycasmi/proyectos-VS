//Nombre: Cynthia B. Castillo Millán.
//Matrícula: A01374530
//Segundo Avance de Proyecto.


/*Librerias: stdio para uso de printf; stdlib para uso de rand y srand; time para que los numeros sean aleatorios
tomando como base el tiempo; #pragma warning: llamada al precompilador para evitar el error que produce scanf en Windows.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#pragma warning (disable:4996)

/*Constantes a través del programa que facilitan cambios de manera rápida.
CARDSIZE: número de cartas en la baraja (se agrega una posicion mas con la finalidad de que coincidan con el numero de carta).
FREQ: frecuencia de aparicion de cada numero de carta. (Por la misma razon que el anterior, se le agrega una posicion mas).
MANO: numero de cartas que se le dan al jugador.*/
#define CARDSIZE 53
#define FREQ 14
#define MANO 5

/*Funcion que determina el tipo de mano que obtiene el jugador. Recibe como parametro el arreglo de cartas dadas al jugador (mano)*/
void manos(int *x, int a[], char figu[], int j)
{
	int i;//Variable unica usada en el ciclo (funciona como contador) y en todas las condiciones (como numero de posicion en arreglo). 

	for (i = 0; i < MANO; i++) //Ciclo que permite revisar todas las cartas del jugador.
	{
		//Condicion que determina si el jugador tiene escalera numerica y menciona los parametros de esta (ej. de 1 - 5 ).
		if (i == 0 && (a[i] + 1) == a[1] && (a[i] + 2) == a[2] && (a[i] + 3) == a[3] && (a[i] + 4) == a[4])
		{
			if (figu[*x] == figu[*x - 1] == figu[*x - 2] == figu[*x - 3] == figu[*x - 4])
			{
				printf("Escalera de color\n");
				j = 15 + a[4];
				break;
			}
			printf("Hay escalera numérica del %d al %d\n\n", (a[i]), a[i + 4]);
			j = 11 + a[4];
			break;
		}

		if (figu[*x] == figu[*x - 1] == figu[*x - 2] == figu[*x - 3] == figu[*x - 4])
		{
			printf("Color\n");
			break;
		}

		//Condicion que determina si hay Poker.
		if (i <= 1 && a[i] == a[i + 3])
		{
			printf("Póker\n");
			j = 14 + a[4];
			printf("Puntuacion: %d", j);
			break;
		}
		//Condicion que determina si hay Full.
		if (a[0] == a[2] && a[3] == a[4]){
			printf("Full\n");
			j = 13 + a[4];
			printf("Puntuacion: %d", j);
			break;
		}
		//Condicion que determina si hay Full (en un orden distinto).
		if (a[0] == a[1] && a[2] == a[4]){
			printf("Full\n");
			j = 13 + a[4];
			printf("Puntuacion: %d", j);
			break;
		}
		//Condicion que determina si hay Tercia.
		if (i <3 && a[i] == a[i + 2])
		{
			printf("Tercia\n");
			j = 10 + a[4];
			printf("Puntuacion: %d", j);
			break;
		}
		//Condicion que determina si hay Doble Par.
		if (i < 2)
		{
			if (a[i] == a[i + 1] && a[3] == a[4])
			{
				printf("Doble par\n");
				j = 9 + a[4];
				printf("Puntuacion: %d", j);
				break;
			}
			if (a[0] == a[1] && a[2] == a[3])
			{
				printf("Doble par\n");
				j = 9 + a[4];
				printf("Puntuacion: %d", j);
				break;
			}
		}
		//Condicion que determina si hay un Par.
		if (i <= 3 && a[i] == a[i + 1])
		{
			printf("Par\n");
			j = 8 + a[4];
			printf("Puntuacion: %d", j);
			break;
		}
	}

	if (i == 5)
	{
		as(a, figu);
		if (a[4] == 14)
		{
			printf("Carta mayor: As");
			printf("%c\n", figu[*x]);
			j = 7 + a[4];
			printf("Puntuacion: %d", j);
		}
		else if (a[4] == 13)
		{
			printf("Carta mayor: Rey");
			printf("%c\n", figu[*x]);
			j = 7 + a[4];
			printf("Puntuacion: %d", j);
		}
		else if (a[4] == 12)
		{
			printf("Carta mayor: Reina");
			printf("%c\n", figu[*x]);
			j = 7 + a[4];
			printf("Puntuacion: %d", j);
		}
		else if (a[4] == 11)
		{
			printf("Carta mayor: Jack");
			printf("%c\n", figu[*x]);
			j = 7 + a[4];
			printf("Puntuacion: %d", j);
		}
		else
		{
			printf("Carta mayor: %d", a[4]);
			printf(" %c\n", figu[*x]);
			j = 7 + a[4];
			printf("Puntuacion: %d", j);
		}
	}
}


//Bubblesort: ordenamiento de los datos del arreglo mano (cartas del jugador).
void bubblesort(int m1[], char figu[])
{
	int a, b, c = 0, x;
	char d;

	for (a = 0; a < MANO; a++)
	{
		for (b = 1; b < (5 - a); b++)
		{
			if (m1[b - 1] > m1[b])
			{
				c = m1[b - 1];
				d = figu[b];

				m1[b - 1] = m1[b];
				figu[b] = figu[b + 1];

				m1[b] = c;
				figu[b + 1] = d;
			}
		}
	}
}

//Funcion que, en caso de corrida que involucre el as, convierta el 1 en 14, para asi formalarla. Parametro: mano
void asCo(int *x, int arrm[], char figu[], int j)
{
	int i;
	for (i = 0; i < MANO; i++)
	{
		if (arrm[i] == 1)
		{
			if (arrm[1] == 10 && arrm[2] == 11 && arrm[3] == 12 && arrm[4] == 13)
			{
				arrm[i] = 14;
				bubblesort(arrm, figu);
				if (figu[*x] == figu[*x - 1] == figu[*x - 2] == figu[*x - 3] == figu[*x - 4])
				{
					printf("For imperial.\n");
					j = 15 + arrm[4];
					printf("Puntuacion: %d", j);
					break;
				}
				break;
			}
		}
	}

}

//Funcion que convierte el As en 14. Parametro: mano
int as(int arrm[], char figu[])
{
	int i;
	for (i = 0; i < MANO; i++)
	{
		if (arrm[i] == 1)
		{
			arrm[i] = 14;
			bubblesort(arrm, figu);
			break;
		}
	}
	return arrm;
}

//Funcion que crea las cartas del juego en orden aleatorio. j es el contador, c es el arreglo cartas, f es la frecuencia que cada valor aparece.
void cartas(int c[], int f[], char figu[], char fig[])
{
	int i;
	for (i = 1; i < CARDSIZE; i++) //ciclo que permite crear las 53 cartas.
	{
		c[i] = 1 + rand() % 13;  //generador aleatorio de cartas
		++f[c[i]]; //contador que aumenta en uno  la frecuencia del valor de la carta que aparezca.

		if (f[c[i]] == MANO) //condicion que revisa que ninguna carta se cree mas de 4 veces.
		{
			do //ciclo que reduce el numero de la frecuencia y crea otra carta que aun no tenga el valor de 4.
			{
				--f[c[i]];
				c[i] = 1 + rand() % 13;
				++f[c[i]];
			} while (f[c[i]] == MANO);
		}
	}

	int n, j, k = 0, kf[4] = { 0 };
	for (i = 1; i < 14; i++)
	{
		for (j = 1; j < CARDSIZE; j++)
		{
			if (c[j] == i)
			{
				k = rand() % 4;
				figu[j] = fig[k];
				kf[k]++;

				if (kf[k] == 2)
				{
					do
					{
						--kf[k];
						k = rand() % 4;
						figu[j] = fig[k];
						++kf[k];
					} while (kf[k] == 2);
				}
			}
		}
		for (n = 0; n < 4; n++)
			kf[n] = 0;
	}


	//Ciclo que imprime las cartas en desorden.
	printf("Cartas barajeadas:\n");
	for (i = 1; i < CARDSIZE; i++)
	{
		printf("Carta %d: %d", i, c[i]);
		printf("\t%c\n", figu[i]);
	}

}

void impresionsinbarajear(int c[], char fig[])
{
	int i, x = 0;

	printf("Cartas sin barajear:\n");
	for (i = 1; i < CARDSIZE; i++)
	{
		if (x == 4)
			x = 0;
		printf("Carta %d: %d", i, c[i]);
		printf("\t%c\n", fig[x]);
		x++;
	}
	printf("\n\n");
}

void creadormanos(int *x, int m[], int c[])
{
	int i;
	for (i = 0; i < MANO; i++)
	{
		m[i] = c[i + 1];
		*x = *x + 1;
	}
}

void impresionmanos(int *x, int m1[], char figu[], int j)
{
	int i;
	//Impresion de las cartas dadas al jugador en desorden.
	printf("\n\nCartas del jugador:\n\n");
	for (i = 0; i < MANO; i++)
	{
		printf("%d", m1[i]);
		printf("%c  ", figu[i + 1]);
	}
	printf("\n");

	bubblesort(m1, figu); //bubblesort(arreg);

	asCo(&x, m1, figu, j); //as(arreg);

	printf("\n\nCartas acomodadas del jugador:\n\n");
	for (i = 0; i < MANO; i++)
	{
		printf("%d", m1[i]); //printf("%d  ", arreg[i];
		printf("%c", figu[i + 1]);
		printf(" ");
	}
	printf("\n\n");
}

void pregjugadores(int *j)
{
	int numjugadores, x = 0; //Variable que guarda el valor de la respuesta del jugador.

	do
	{
		printf("\nCuantos jugadores son?\n");
		printf("(Se necesitan de al menos 2)\n");
		scanf("%d", &numjugadores); //Recibe el valor introducido por el usuario
		printf("\n\n");

		if (numjugadores == 2)
		{
			*j = 2;
			x--;
		}

		if (numjugadores == 3)
		{
			*j = 3;
			x--;
		}

		if (numjugadores == 4)
		{
			*j = 2;
			x--;
		}

		if ((numjugadores > 4) || (numjugadores < 2))
		{
			printf("El numero de jugadores es muy pequeño o muy grande.\n");
			x++;
		}

	} while (x > 0);
}

//Funcion principal que imprime las cosas en pantalla y tiene la mayor parte de las funciones (y todos los arreglos utilizados)
void juego()
{
	int cards[CARDSIZE] = { 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13 };
	int frecuencia[FREQ] = { 0 }, mano1[MANO] = { 0 }, mano2[MANO] = { 0 }, mano3[MANO] = { 0 }, mano4[MANO] = { 0 };
	int i, x = 0, j = 0, j1 = 0, j2 = 0, j3 = 0, j4 = 0;
	char figuras[CARDSIZE], fig[4] = { '♢', '♤', '♧', '♡' };

	impresionsinbarajear(cards, fig);
	cartas(cards, frecuencia, figuras, fig); //Llamada a funcion que mezcla las cartas.

	pregjugadores(&j);

	//printf("j: %d", j);

	creadormanos(&x, mano1, cards);
	//printf("\nX: %d\n", x);

	impresionmanos(&x, mano1, figuras, j1);

	manos(&x, mano1, figuras, j1); //manos(arreg);

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