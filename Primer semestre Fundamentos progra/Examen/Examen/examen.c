#include <stdio.h>

void fuckit()
{
	int i;
	char arreglostring[] = { "Hola" };

	for (i = 0; i <= 4; i++)
	{
		printf("%c", arreglostring[i]);
	}
}

void cambiante(int *v)
{
	*v += 5;
}

void arreglobidenmesional()
{
	int a, b;
	int arg[2][3] = { { 1, 2, 3 }, { 5, 6 } };

	for (a = 0; a <= 1; ++a) {

		// output column values                              
		for (b = 0; b <= 2; ++b) {
			printf("%d ", arg[a][b]);
		}
		printf("\n");
	}
}

int main()
{
	int variable = 5;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

	fuckit();
	cambiante(&variable);
	printf("variable: %d\n", variable);
	arreglobidenmesional();

	return 0;
}