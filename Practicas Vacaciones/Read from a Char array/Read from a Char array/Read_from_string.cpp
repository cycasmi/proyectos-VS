/* sscanf example */
#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	char sentence[] = "Rudolph is 12 years old";
	char str[20];
	int i;

	//The * between the %s indicates the data about to read is going to be ignored.
	//You can only read one string per char array.
	sscanf(sentence, "%s %*s %d", str, &i);
	printf("%s -> %d\n", str, i);

	return 0;
}