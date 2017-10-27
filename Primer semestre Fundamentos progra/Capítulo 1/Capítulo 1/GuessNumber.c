// Randomly generate numbers between 1 and 1000 for user to guess.
#include <stdio.h> 
#include <stdlib.h> //En ésta esta rand y srand.
#include <time.h> //Toma el número de los milisegundos desde 1970.
#pragma warning (disable:4996) //************llamada al pre-compilador*********** (todo lo que empieza con # ). Sólo se usa esta línea en windows para
							   //que sirva el scanf.

void guessGame(void); // function prototype *********~~~~~~~~~~~~~~~~~~~~
int isCorrect( int, int ); // function prototype

int main(void)//********* Un programa inicia en el MAIN
{
   srand( time (NULL) ); // seed random number generator *******************Se descomentó para que dé números aleatorios.**********
   guessGame(); //************Aquí se llama a la función GUESSGame que está abajo del main pero se define arriba con una función que no hace nada. ~~~~~
} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame(void)//~~~~~~~~~~~~~~~~~~~~~~~
{
   int answer; // randomly generated number
   int guess; // user's guess
   char response; // 'y' or 'n' response to continue game

   // loop until user types 'n' to quit game
   do {
	   printf("aleatorio:%d\n", rand());//**********************me imprime el número rand que varia
	   printf("aleatorio:%d\n", rand()%4);//************* Módulo del número rand. Con esta división, va a imprimir desde 0 hasta el número 4 (PERO JAMÁS EL NÚMERO 4).
	   printf("aleatorio:%d\n", 1+ rand() %2);//*************Sumando 1 se evita la aparición de 0. Con esta división, va a imprimir desde 1 hasta el número 2 (JAMÁS EL 2. Es su límite).
	   printf("aleatorio:%d\n", (rand() % 2)-1);
	   
	   // generate random number between 1 and 1000
      // 1 is shift, 1000 is scaling factor
      answer = 1 + rand() % 1000;

      // prompt for guess
      puts( "I have a number between 1 and 1000.\n" 
            "Can you guess my number?\n" 
            "Please type your first guess.");
      printf( "%s", "? " );//*************No importa esta línea. Se agarra el valor de %s del ?. Se pudo haber agregado 
      scanf( "%d", &guess );//*********Scanf es para char y string pero aquí se forza a que imprima un valor entero.

      // loop until correct number
      while ( !isCorrect( guess, answer ) )//SIGUE PREGUNTANDO AL USUARIO MIENTRAS LOS NÚMEROS NO SEAN IGUALES. ISCORRECT es una función abajo. 
         scanf( "%d", &guess );

      // prompt for another game
      puts( "\nExcellent! You guessed the number!\n"
         "Would you like to play again?" );
      printf( "%s", "Please type ( y=yes, n=no )? " ); //"TEXTO ORIGNIAL: Please type ( 1=yes, 2=no )? " ); 
      scanf( "%s", &response );//TEXTO ORIGINAL: "%d", &response )

      puts( "" );
   } while ( response == 'y' );
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
int isCorrect( int g, int a )
{
   // guess is correct
   if ( g == a )
      return 1;

   // guess is incorrect; display hint
   if ( g < a )
      printf( "%s", "Too low. Try again.\n? " );
   else
      printf( "%s", "Too high. Try again.\n? " );

   return 0;
} // end function isCorrect


/******************#include <stdlib> //Para que no marque error el scanf.
#include <time>//Para usar srand

Ejemplo de hacer X cosa pidiendo datos desde teclado o de forma aleatoria

void datos()
{
	int n
		printf("Dame el númerio n para la sumatoria");
	scanf("%d", &n); //El ampersand es importante en el scanf.
	printf("número: %d ", n);
	sumatoriaWhileIncremental(n);

	n = rand() % 101. //Me dará números del 0 al 100. SI LE PONGO 1+ rand()%100 Me DARÁ NÚMEROS DESDE EL 0 AL 100.
		printf("número aleatorio: ");
	sumatoriaWhileIncremental(n);

	SumatoriaWhileIncremental(rand() % 101); //Es lo mismo que lo de arriba.
}

*/
