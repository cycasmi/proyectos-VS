#include "Pruebaexamen.h"

void opciones()
{
	printf("Seleccione la operacion que desee realizar\n");
	printf("a: Union\n");
	printf("b: Interseccion\n");
	printf("c: Diferencia\n");
	printf("d: Complemento\n");
	printf("e: Potencia\n");
}

void impresiones(char cA[], char cB[], char cU[], int a, int b, int u)
{
	int i;
	printf("\n\nValores de A:\n");
	for (i = 0; i < a; i++)
	{
		printf("%c ", cA[i]);
	}

	printf("\n\nValores de B:\n");
	for (i = 0; i < b; i++)
	{
		printf("%c ", cB[i]);
	}

	printf("\n\nValores de U:\n");
	for (i = 0; i < u; i++)
	{
		printf("%c ", cU[i]);
	}
	printf("\n");
}

void interseccion(int a1, int a2, char ar1[], char ar2[])
{
	int i = 0, j = 0;

	for (i = 0; i < a1; i++)
	{
		for (j = 0; j < a2; j++)
		{
			if (ar1[i] == ar2[j])
				printf("%c ", ar1[i]);
		}
	}
}

void potencia(int a1, char ar1[])
{
	int i = 0, j = 0, x = 1, k = 0, num = 1;

	while (i < a1)
	{
		num *= 2;
		i++;
	}

	printf("{ ");
	printf("{ }, ");
	x++;

	for (i = 0; i < a1; i++)
	{
		printf("{%c},", ar1[i]);
		x++;
	}

	for (i = 0; i < a1; i++)
	{
		for (j = a1 - 1; j > i; j--)
		{
			printf("{%c,%c},", ar1[i], ar1[j]);
			x++;
		}
	}


	for (i = 0; i < (num - x); i++)
	{
		printf("{");
		for (j = 0; j < a1; j++)
		{
			if (j == k)
				continue;
			printf("%c,", ar1[j]);
		}
		printf("}");
		k++;
	}

	printf("{");
	for (i = 0; i < a1; i++)
	{
		printf("%c,", ar1[i]);
	}
	printf("}");
	printf(" }");

}

void complemento(int a1, int a2, char ar1[], char ar2[], char ar3[])
{
	int i = 0, j = 0, s = 0;

	for (i = 0; i < a1; i++)
	{
		for (j = 0; j < a2; j++)
		{
			if (ar1[i] == ar2[j])
				ar3[i] = ar1[i];
		}
	}

	for (i = 0; i < a1; i++)
	{
		if (ar2 == ar1)
		{
			printf("{ }");
			break;
		}

		if (ar1[i] == ar3[i])
			continue;

		printf("%c ", ar1[i]);
	}
}

void diferencia(int a1, int a2, char ar1[], char ar2[], char ar3[])
{
	int i = 0, j = 0, s = 0;

	for (i = 0; i < a1; i++)
	{
		for (j = 0; j < a2; j++)
		{
			if (ar1[i] == ar2[j])
				ar3[i] = ar1[i];
		}
	}

	for (i = 0; i < a1; i++)
	{
		if (ar1[i] == ar3[i])
			continue;

		printf("%c ", ar1[i]);
	}
}



void uunion(int a1, int a2, int ai, int ex, char ar3[])
{
	int i = 0, u = 0;

	do
	{
		if (a1 == ai || a2 == ai)
		{
			for (i = 0; i < ai; i++)
				printf("%c ", ar3[i]);
			break;
		}

		for (i = 0; i < (ai - (ai - ex)); i++)
			printf("%c ", ar3[i]);

	} while (u < 0);
}

void operaciones(char opc, int i, int j, int p, int s, int a, int b, int x, char valor, char cA[], char cB[], char cU[], char ncs[])
{
	char aa, bb;

	switch (opc)
	{
	case 'A':
	case 'a':
		printf("Dime el primer conjunto a usar:\n");
		printf("(A, B, U)\n");
		scanf("%s", &aa);
		printf("Dime el segundo conjunto a usar:\n");
		scanf("%s", &bb);

		if ((aa == 'A') && (bb == 'B'))
		{
			printf("\nUnion entre A y B:\n");
			uunion(a, b, i, x, cU);
		}

		if ((aa == 'B') && (bb == 'A'))
		{
			printf("\nUnion entre B y A:\n");
			uunion(b, a, i, x, cU);
		}

		if ((aa == 'A') && (bb == 'U'))
		{
			printf("\nUnion entre A y U:\n");
			uunion(a, i, i, x, cU);
		}

		if ((aa == 'U') && (bb == 'A'))
		{
			printf("\nUnion entre U y A:\n");
			uunion(a, i, i, x, cU);
		}

		if ((aa == 'B') && (bb == 'U'))
		{
			printf("\nUnion entre B y U:\n");
			uunion(b, i, i, x, cU);
		}

		if ((aa == 'U') && (bb == 'B'))
		{
			printf("\nUnion entre U y B:\n");
			uunion(i, b, i, x, cU);
		}

		break;

	case 'B':
	case 'b':
		printf("Dime el primer conjunto a usar:\n");
		printf("(A, B, U)\n");
		scanf("%s", &aa);
		printf("Dime el segundo conjunto a usar:\n");
		scanf("%s", &bb);

		if ((aa == 'A') && (bb == 'B'))
		{
			printf("\nInterseccion entre A y B:\n");
			interseccion(a, b, cA, cB);
		}

		if ((aa == 'B') && (bb == 'A'))
		{
			printf("\nInterseccion entre B y A:\n");
			interseccion(b, a, cB, cA);
		}

		if ((aa == 'A') && (bb == 'U'))
		{
			printf("\nInterseccion entre A y U:\n");
			interseccion(a, i, cA, cU);
		}

		if ((aa == 'U') && (bb == 'A'))
		{
			printf("\nInterseccion entre U y A:\n");
			interseccion(a, i, cA, cU);
		}

		if ((aa == 'B') && (bb == 'U'))
		{
			printf("\nInterseccion entre B y U:\n");
			interseccion(b, i, cB, cU);
		}

		if ((aa == 'U') && (bb == 'B'))
		{
			printf("\nInterseccion entre U y B:\n");
			interseccion(b, i, cB, cU);
		}
		break;

	case 'C':
	case 'c':
		printf("Dime el primer conjunto a usar:\n");
		printf("(A, B, U)\n");
		scanf("%s", &aa);
		printf("Dime el segundo conjunto a usar:\n");
		scanf("%s", &bb);

		if ((aa == 'A') && (bb == 'B'))
		{
			printf("\nDiferencia entre A y B:\n");
			diferencia(a, b, cA, cB, ncs);
		}

		if ((aa == 'B') && (bb == 'A'))
		{
			printf("\nDiferencia entre B y A:\n");
			diferencia(b, a, cB, cA, ncs);
		}

		if ((aa == 'A') && (bb == 'U'))
		{
			printf("\nDiferencia entre B y A:\n");
			printf("{ }\n");
		}

		if ((aa == 'U') && (bb == 'A'))
		{
			printf("\nDiferencia entre U y A:\n");
			diferencia(i, a, cU, cA, ncs);
		}

		if ((aa == 'B') && (bb == 'U'))
		{
			printf("\nDiferencia entre B y U:\n");
			printf("{ }\n");
		}

		if ((aa == 'U') && (bb == 'B'))
		{
			printf("\nDiferencia entre U y B:\n");
			diferencia(i, b, cU, cB, ncs);
		}
		break;

	case 'D':
	case 'd':
		printf("Dime el conjunto a usar:\n");
		printf("(A, B, U)\n");
		scanf("%s", &aa);

		if (aa == 'A')
		{
			printf("\nComplemento de A:\n");
			complemento(i, a, cU, cA, ncs);
		}

		if (aa == 'U')
		{
			printf("\nComplemento de U:\n");
			complemento(i, i, cU, cU, ncs);
		}

		if (aa == 'B')
		{
			printf("\nComplemento de B:\n");
			complemento(i, b, cU, cB, ncs);
		}
		break;

	case 'E':
	case 'e':
		printf("Dime el conjunto a usar:\n");
		printf("(A, B, U)\n");
		scanf("%s", &aa);

		if (aa == 'A')
		{
			printf("\nPotencia de A:\n");
			potencia(a, cA);
		}

		if (aa == 'U')
		{
			printf("\nPotencia de U:\n");
			potencia(i, cU);
		}

		if (aa == 'B')
		{
			printf("\nPotencia de B:\n");
			potencia(b, cB);
		}
		break;

	default: //Caso que considera que el usuario introduzca otro caracter
		printf("Caracter no reconocido.\n");
		printf("Por favor, seleccione alguna de las letras anteriores.");
		break;
	}
}

void conjuntos()
{
	int i = 0, j = i + 1, p = j + 1, s = j, a = 0, b = 0, u = 0, x = 0;
	char valor, opcion, continuar, conjuntoA[30], conjuntoB[30], conjuntoU[90], necesario[60];


	printf("Inserte los valores del conjunto A\n");
	printf("(Cuando haya finalizado, presione EOF)\n");

	while (a < 30 && (valor = getchar()) != EOF)
	{
		if (valor == '\n')
			continue;

		for (i = 0; i < a; i++)
		{
			if (valor == conjuntoA[i])
			{
				printf("Ya se introdujo el valor %c\n", conjuntoA[i]);
				printf("Introduzca otro o presione EOF para pasar al siguiente conjunto.\n", conjuntoA[i]);
				valor = getchar();
			}
		}

		conjuntoA[a] = valor;
		a++;
	}

	printf("Inserte los valores del conjunto B\n");
	printf("(Cuando haya finalizado, presione EOF)\n");

	while (b < 30 && (valor = getchar()) != EOF)
	{
		if (valor == '\n')
			continue;

		for (i = 0; i < b; i++)
		{
			if (valor == conjuntoB[i])
			{
				printf("Ya se introdujo el valor %c\n", conjuntoB[i]);
				printf("Introduzca otro o presione EOF para pasar al siguiente conjunto.\n", conjuntoB[i]);
				valor = getchar();
			}
		}

		conjuntoB[b] = valor;
		b++;
	}


	for (i = 0; i < a; i++)
	{
		conjuntoU[i] = conjuntoA[i];
		u++;
	}

	for (i = 0; i < b; i++)
	{
		conjuntoU[u] = conjuntoB[i];
		u++;
	}

	x = u - 2;
	printf("Inserte los valores del conjunto U\n");
	printf("(Cuando haya finalizado, presione EOF)\n");

	i = 0;
	while (i < 30 && (valor = getchar()) != EOF)
	{
		if (valor == '\n')
			continue;

		conjuntoU[u] = valor;
		i++;
		u++;
	}

	for (i = 0; i < u; i++)
	{
		for (j = i + 1; j < u; j++)
		{
			if (conjuntoU[i] == conjuntoU[j])
			{
				s = j;
				for (p = j + 1; p < u && s < (u - 1); p++)
				{
					conjuntoU[s] = conjuntoU[p];
					s++;
				}
				u--;
			}
		}
	}

	//impresiones(conjuntoA, conjuntoB, conjuntoU, a, b, i);

	opciones();
	opcion = getchar();
	operaciones(opcion, i, j, p, s, a, b, x, valor, conjuntoA, conjuntoB, conjuntoU, necesario);
}