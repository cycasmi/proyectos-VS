#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

int rellenar(int m[3][3]);
void imprimir(int m[3][3]);
int transformar1(int m[3][3], int a);
int transformar2(int m[3][3], int a);
int transformar3(int m[3][3], int a);

int main()
{
	srand(time(NULL));
	int magico[3][3];
	int res[3][3] = { 1, 2, 1, 1, 0, 1, 1, 1, 9 };
	int n;

	rellenar(magico);
	imprimir(magico);
	printf("Dame el numero de la celda");
	scanf("%d", &n);
	if (n == 1 || 3 || 7 || 9)
	{
		transformar1(magico, n);
	}
	else if (n == 2 || 4 || 6 || 8)
	{
		transformar2(magico, n);
	}
	else if (n == 5)
	{
		transformar3(magico, n);
	}
	imprimir(magico);

	return 0;
}

int rellenar(int m[3][3])
{
	int i, j;

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			m[i][j] = rand() % 4;
		}
	}
	return 0;
}

void imprimir(int m[3][3])
{
	int i, j;

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

int transformar1(int m[3][3], int a)
{
	printf("t1\n");
	if (a == 1)
	{
		printf("%d\n", a);
		m[1][1] = m[1][1] + 1 % 3;
		m[1][2] = m[1][2] + 1 % 3;
		m[2][1] = m[2][1] + 1 % 3;
		m[2][2] = m[2][2] + 1 % 3;
	}

	else if (a == 3)
	{
		printf("%d\n", a);
		m[1][3] = m[1][3] + 1 % 3;
		m[1][2] = m[1][2] + 1 % 3;
		m[2][3] = m[2][3] + 1 % 3;
		m[2][2] = m[2][2] + 1 % 3;
	}

	else if (a == 7)
	{
		printf("%d\n", a);
		m[3][1] = m[3][1] + 1 % 3;
		m[3][2] = m[3][2] + 1 % 3;
		m[2][1] = m[2][1] + 1 % 3;
		m[2][2] = m[2][2] + 1 % 3;
	}

	else if (a == 9)
	{
		printf("%d\n", a);
		m[3][3] = m[3][3] + 1 % 3;
		m[2][2] = m[2][2] + 1 % 3;
		m[3][2] = m[3][2] + 1 % 3;
		m[2][3] = m[2][3] + 1 % 3;
	}
	return 0;
}

int transformar2(int m[3][3], int a)
{
	printf("t2\n");
	if (a == 2)
	{
		printf("%d\n", a);
		m[1][2] = (m[1][2] + 3 % 3) + 1;
		m[2][2] = (m[2][2] + 3 % 3) + 1;
		m[3][2] = (m[3][2] + 3 % 3) + 1;
	}

	else if (a == 4)
	{
		printf("%d\n", a);
		m[1][1] = (m[1][1] + 3 % 3) + 1;
		m[2][1] = (m[2][1] + 3 % 3) + 1;
		m[3][1] = (m[3][1] + 3 % 3) + 1;
	}

	else if (a == 6)
	{
		printf("%d\n", a);
		m[1][3] = (m[1][3] + 3 % 3) + 1;
		m[2][3] = (m[2][3] + 3 % 3) + 1;
		m[3][3] = m[3][3] + 1 % 3;
	}

	else if (a == 8)
	{
		printf("%d\n", a);
		m[1][2] = (m[1][2] + 3 % 3) + 1;
		m[2][2] = (m[2][2] + 3 % 3) + 1;
		m[3][2] = (m[3][2] + 3 % 3) + 1;
	}
	return 0;
}

int transformar3(int m[3][3], int a)
{
	printf("t3\n");
	m[2][2] = (m[2][2] + 3 % 3) + 1;
	m[1][3] = (m[1][3] + 3 % 3) + 1;
	m[1][2] = (m[1][2] + 3 % 3) + 1;
	m[2][1] = (m[2][1] + 3 % 3) + 1;
	m[2][3] = (m[2][3] + 3 % 3) + 1;
	return 0;
}

/*
int i,d=0;
for(i=0; i<10; i++)
{
d=i%3;
printf("%d\n",d );
}
*/

