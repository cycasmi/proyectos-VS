#include <stdio.h>
#pragma warning (disable: 4996)

unsigned int factorial(unsigned int num)
{
	if (num > 1)
		return num*factorial(num - 1);
	else
		return 1;
}

int main()
{
	unsigned int a;

	printf("Give me a number:");
	while (scanf("%d", &a) != EOF)
	{
		printf("The factorial of %d is %d\n", a, factorial(a));
		printf("\n\nGive me a number:");
	}

	return 0;
}

//hanoi, 1 + hanoi(n-1)