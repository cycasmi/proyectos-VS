// Name: Cynthia Berenice Castillo Millán.
// Student no. A01374530
// Homework 1 Fibonacci code

#include <cstdio>
using namespace std;
#pragma warning (disable: 4996)

unsigned long fibonacci(unsigned long number)
{
	if (number <= 1)
		return number;
	else
		return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
	long number;

	printf("Give me a number:");
	while (scanf("%ld", &number) != EOF)
	{
		printf("The fibonacci in the position %ld is %d\n", number, fibonacci(number));
		printf("\n\nGive me a number:");
	}

	return 0;
}