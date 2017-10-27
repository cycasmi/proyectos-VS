#include <cstdio>
#include <algorithm>
#pragma warning (disable: 4996)
using namespace std;

//Recibe los dos números entre los cuales se calcularan los cycle-lenghts.
unsigned int cycle_lenght(unsigned int num1, unsigned int num2)
{
	if (num1 > num2)
		swap(num1, num2);

	//Variable son los numeros que salen del número al cual se le está calculando el lenght.
	//Sum es la cantidad de pasos que se usan para llegar a 1.
	//max_lenght es el mayor número de pasos que se han requerido hasta el momento para llegar a 1.
	unsigned int variable, sum, max_lenght = 0;

	for (int i = num1; i <= num2; i++)
	{
		variable = i;
		sum = 1;
		do
		{
			if ((variable % 2) == 0)
			{
				variable /= 2;
				sum++;
			}
			else if (variable != 1)
			{
				++(variable *= 3);
				sum++;
			}
		} while (variable > 1);

		if (sum > max_lenght)
			max_lenght = sum;
	}
	return max_lenght;
}

int main()
{
	int i, j, result;

	while (scanf("%d %d", &i, &j) != EOF)
	{
		result = cycle_lenght(i, j);

		printf("%d %d %d\n", i, j, result);
	}

	return 0;
}