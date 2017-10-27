#include <stdio.h>

void rectanguloFor(short n)

//********* Funci�n que imprime un RECT�NGULO de asteriscos con For incremental (Con dos For)
{
	int i = 0, j = 0; //(i, j o k = �ndices comunes en matem�ticas) Se pueden inicializar varias variables desde el mismo lugar.
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("* "); //Con esto, el programa va a imprimir la cantidad n de asteriscos por n. 
			//El For I se corre, despu�s se realiza el ciclo For J hasta que J sobrepase n. Cuando esto pase, se sale de este For y regresa al For I
			  //y vuelve a hacer lo anterior hasta que I sobrepase I.
		}
		printf("\n"); //gracias a este print se imprime cada l�nea del J por separado.
	} //Este punto es el que incrementa la variable y la regresa a la segunda parte del For.
	printf("\n");
}


//********* Funci�n que imprime un TRI�NGULO de asteriscos con FOR INCREMENTAL.
void trianguloFor(short n)
{
	int i = 0, j = 0; //(i, j o k = �ndices comunes en matem�ticas) Se pueden inicializar varias variables desde el mismo lugar.
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++) //El cambio aqu� es que utiliza como tope, la I.
		{
			printf("* "); //Con esto, el programa va a imprimir la cantidad n de asteriscos por n. 
			//El For I se corre, despu�s se realiza el ciclo For J hasta que J sobrepase n. Cuando esto pase, se sale de este For y regresa al For I
			//y vuelve a hacer lo anterior hasta que I sobrepase I.
		}
		printf("\n"); //gracias a este print se imprime cada l�nea del J por separado.
	} //Este punto es el que incrementa la variable y la regresa a la segunda parte del For.
	printf("\n");
}

//********* Versi�n 1: Funci�n que imprime un TRI�NGULO de asteriscos con FOR DECREMENTAL.*********
void trianguloFor2(short n)
{
	int i = 0, j = 0; 
	for (i = n; i >= 1; i--)//Cambios!!! I inicia como N, la condici�n es 1)
	{
		for (j = n-i ; j >= 1; j--) //ORDEN!!!!!!!! (INICIALIZACI�N; CONDICI�N; CONTADOR)
		{
			printf("* "); //Con este FOR, el programa va a imprimir la cantidad n de asteriscos por n. 
		}
		printf("\n");
	} 
	printf("\n");
}

//**** Versi�n 2 con ciclo****
void cicloInterno(short n, short i)
{
	short j = 0;
	for (j = n - i; j >= 1; j--)
	{
		printf("* "); //Con este FOR, el programa va a imprimir la cantidad n de asteriscos por n. 
	}
	printf("\n");
}

void trianguloForDos(short n)
{
	short i = 0;
	for (i = n; i >= 1; i--)
	{
		cicloInterno(n, i);
	}
	printf("\n");
}


//********* Funci�n que imprime un TRI�NGULO INVERTIDO de asteriscos con FOR DECREMENTAL.**********
void trianguloForInv(short n)
{
	printf("\n");
	int i = 0, j = 0;
	for (i = n; i >= 1; i--)//Cambios!!! I inicia como N, la condici�n es 1)
	{
		for (j = i; j >= 1; j--) //ORDEN!!!!!!!! (INICIALIZACI�N; CONDICI�N; CONTADOR)
		{
			printf("* "); //Con este FOR, el programa va a imprimir la cantidad n de asteriscos por n. 
		}
		printf("\n");
	}
	printf("\n");
}

/*
*Funci�n principal patra mandar a llamar las funciones que imprimir�an los tri�ngulos.
*/

int main() //en MAC:  int main ( int atrg, const char * argv[] ) (aparece as� s�lo)
{
	int n = 10;
	printf("Rectangulo incremental\n");
	rectanguloFor(n);

	printf("Triangulo incremental\n");
	trianguloFor(n);

	printf("Triangulo Decremental\n");
	trianguloFor2(n);

	printf("Triangulo Decremental con ciclo interno\n");
	trianguloForDos(n);

	printf("Triangulo Decremental Invertido\n");
	trianguloForInv(n);

	printf("fin\n");
	return 0;
}