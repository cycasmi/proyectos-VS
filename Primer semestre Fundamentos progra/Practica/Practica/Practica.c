//Prueba figuras en Linux

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("Prueba 1\n");
	printf("♠ ♣ ♥ ❤ ◆\n");
	printf("♢ ♤ ♧ ♡\n\n");

	printf("Prueba 2\n");
	printf("%c %c %c %c %c\n", '♠', '♣', '♥', '❤', '◆');
	printf("%c %c %c %c \n\n", '♢', '♤', '♧', '♡');

	printf("Prueba 3\n");
	printf("%c %c %c %c %c\n", "&#9824", "&#10084", "&#9829", "&#9827", "&#9830");
	printf("%c %c %c %c \n\n", "&#9828", "&#9825", "&#9831", "&#9826");

	printf("Prueba 4\n");
	printf("%s %s %s %s %s\n", "&#9824", "&#10084", "&#9829", "&#9827", "&#9830");
	printf("%s %s %s %s \n\n", "&#9828", "&#9825", "&#9831", "&#9826");

	printf("Prueba 5\n");
	printf("%c %c %c %c %c\n", "&#9828", "9833", "&#9833", "&#9840", "&#9845");
	printf("%c %c %c %c \n\n", "5828", "9825", "9831", "9826");

	printf("Prueba 6\n");
	printf("************\n");
	printf("**   ◆   **\n");
	printf("************\n");

	return 0;
}