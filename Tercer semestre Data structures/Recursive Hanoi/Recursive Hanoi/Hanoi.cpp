// Name: Cynthia Berenice Castillo Millán.
// Student no. A01374530
// Homework 1 Hanoi Towers

#include <cstdio>
using namespace std;
#pragma warning (disable: 4996)

void hanoi(int &counter, int n, int p1, int p2, int p3)
{
	counter++;

	if (n > 1)
	{
		hanoi(counter, n - 1, p1, p3, p2);
		hanoi(counter, n - 1, p3, p2, p1);
	}
}

int main()
{
	unsigned int number;
	int counter = 0;

	printf("Give me a number:");
	while (scanf("%d", &number) != EOF)
	{
		printf("The  number of moves for a hanoi tower of %d disc(s) is:", number);
		hanoi(counter, number, 1, 2, 3);
		printf(" %d", counter);
		counter = 0;
		printf("\n\nGive me a number:");
	}

	return 0;
}