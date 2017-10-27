//Nombre: Cynthia Berenice Castillo Mill�n
//Matr�cula: A01374530
//Tarea5

#include <stdio.h> //Biblioteca principal que permite imprimir en pantalla.

int factorialT(int j) //Funci�n que calcula factoriales. Se usar� en la f�rmula de combinaciones.
{
	int n = 1; // Declaraci�n e iniciaci�n de variable "contador".
	int factorial = 1; // Declaraci�n e iniciaci�n de variable que acumular� los resultados de la operaci�n.

	while (n <= j) //inicio de ciclo while para calcular el factorial del n�mero deseado.
	{
		factorial *= n; //Operaci�n que calcula el factorial de "n" n�meros.
		n++; //Incremento del contador (evita que se vuelva infinito).
	}
	return factorial; //valor que regresa la funci�n.
}

void trianguloWhileIncremental(int i) //Funci�n que imprime un tri�ngulo de Pascal con ciclo While Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaraci�n e iniciaci�n de varias variables. 
									// n es el contador del primer ciclo, j el contador del segundo y factorial guarda el resultado.
	while (n <= i) //Primer ciclo: se repetir� hasta que el primer contador (n) alcance el valor solicitado "i".
	{
		while (j <= n) //Segundo ciclo: Se repetir� hasta que el segundo contador (j) alcance al valor de "n".
		{
			factorial = factorialT(n)/((factorialT(j))*(factorialT(n-j))); //F�rmula para calcular combinaciones. Donde n es n y j, k. (n k)
			printf("%d\t", factorial); //impresi�n del resultado de "factorial" con un tabulador (�ste separar� los n�meros).
			j++; //aumento de variable j (evita que el ciclo se haga infinitamente).
		}
		j = 0; //Se restaura el valor inicial de j para que el segundo ciclo no se vea afectado.
		printf("\n"); //impresi�n de un espacio para separar las filas del tri�ngulo de Pascal.
		n++; // Aumento de variable n (evita que el ciclo se haga infinitamente).
	}
}

void trianguloWhileDecremental(int i) //Funci�n que imprime un tri�ngulo de Pascal con ciclo While Decremental.
{
	int n = i, j = i - n, factorial = 0;//Declaraci�n e iniciaci�n de varias variables. 

	while (n >= 0) //Primer ciclo : se repetir� hasta que n (que es igual al valor solicitado) disminuya hasta el 0.
	{
		while (j >= 0) //Segundo ciclo : se repetir� hasta que j disminuya hasta el 0.
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j)); //F�rmula para calcular combinaciones. Donde:
																					//(i-n) igual "n" y j es igual a "k"  (n k)
			j--; // disminuci�n de variable j.
			printf("%d\t", factorial); // impresi�n de valores de la f�rmula.
		}
		n--; //disminuci�n de variable n
		j = i - n; //Se restaura el valor inicial de j (despu�s de haber disminuido la n).
		printf("\n"); //Separa las filas del tri�ngulo.
	}
}

void trianguloForIncremental(int i)// Funci�n que imprime un tri�ngulo de Pascal con ciclo For Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaraci�n e iniciaci�n de varias variables. 

	for (n = 0; n <= i; n++) //Primer ciclo: se inicializa contador n, se pone una condici�n y se aumenta
							// n hasta llegar al valor deseado i.
	{
		for (j = 0; j <= n; j++) //Segundo ciclo: Se inicia contador j, se pone una condici�n y se aumenta
								// j hasta llegar al valor de n.
		{
			factorial = factorialT(n) / (factorialT(j)*(factorialT(n - j))); //F�rmula para calcular combinaciones en incrementales.
			printf("%d\t", factorial); //Impresi�n del valor de factorial
		}
		j = 0; //Se reinstraura el valor inicial de j.
		printf("\n"); //Separa las filas del tri�ngulo.
	}
}

void trianguloForDecremental(int i) // Funci�n que imprime un tri�ngulo de Pascal con ciclo For Decremental.
{
	int n = i, j = n-i, factorial = 0;//Declaraci�n e iniciaci�n de varias variables. 
	
	for (n = i; n >= 0; n--)// Primer ciclo: Se inicializa n como el valor deseado, se pone una condici�n
							// n disminuir� hasta llegar al valor de 0
	{
		for (j = i - n; j >= 0; j--) //Segundo ciclo: se inicia j como el n�mero deseado menos el valor de n,
									//Se pone una condici�n, j disminuir� hasta alcanzar el valor de i-n
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j));//Formula que calcula combinaciones en ciclos decrementales.
			printf("%d\t", factorial); //impresi�n de factorial.
		}
		printf("\n"); //Separa las filas del tri�ngulo
	}
}

void trianguloDOWhileIncremental(int i) // Funci�n que imprime un tri�ngulo de Pascal con ciclo Do While Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaraci�n e iniciaci�n de varias variables.

	do //Inicio de primer ciclo: Se realizar� do hasta que n alcance el valor deseado i.
	{
		do //Inicio de segundo ciclo: Se realizar� la f�rmula de combinaciones hasta que j sea mayor a n.
		{
			factorial = factorialT(n) / (factorialT(j)*(factorialT(n - j))); //f�rmula para calcular combinaciones
			printf("%d\t", factorial); //impresi�n de factorial
			j++; //Aumento de j.
		}
		while (j <= n); //Condici�n que determina el fin del ciclo Do While
		j = 0; //Se reinstaura el valor original de j.
		printf("\n"); //Separa las filas de valores del tri�ngulo
		n++; //aumento de n.
	}
	while (n <= i); //Condici�n que determina el fin del segundo ciclo While.
}

void trianguloDOWhileDecremental(int i) //Funci�n que realiza un tri�ngulo de Pascal con un ciclo Do While decremental.
{
	int n = i, j = i-n, factorial = 0; //inicializaci�n y declaraci�n de varias variables.

	do//inicio de primer ciclo: Se detendr� cuando el valor de n sea inferior a 0. Mientras tanto, realizar� otro ciclo.
	{
		do // inicio de segundo ciclo: Se detendr� cuando el valor de j sea menor a 0. Mientras tanto, realizar� una operaci�n.
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j)); //Operaci�n que calcula las combinaciones.
			printf("%d\t", factorial); // imprime los valores de factorial 
			j--; //disminuye j para que el ciclo tenga fin.
		} 
		while (j >= 0); //Condici�n: j sigue siendo mayor a 0
		n--; //Disminuci�n de n para evitar que el ciclo sea infinito.
		j = i-n; //Se reinstaura el valor inicial de j
		printf("\n"); //Separa las filas de valores del tri�ngulo.
	} 
	while (n >= 0); //Condici�n del segundo ciclo: Se detendr� cuando n sea inferior a 0.
}

int main() //Funci�n principal en la que se llaman las dem�s funciones.
{
	int i = 10; //declaraci�n e inicializaci�n de la variable i (valor que se utiliza en todas las funciones)
	printf("Triangulo WHILE Incremental\n\n");
	trianguloWhileIncremental(i);
	printf("\n\n\n");
	printf("******************************************************************************\n");

	printf("\nTriangulo WHILE Decremental\n\n");
	trianguloWhileDecremental(i);
	printf("\n\n\n");
	printf("******************************************************************************\n");

	printf("\nTriangulo FOR Incremental\n\n");
	trianguloForIncremental(i);
	printf("\n\n\n");
	printf("******************************************************************************\n");

	printf("\nTriangulo FOR Decremental\n\n");
	trianguloForDecremental(i);
	printf("\n\n\n");
	printf("******************************************************************************\n");

	printf("\nTriangulo DO WHILE Incremental\n\n");
	trianguloDOWhileIncremental(i);
	printf("\n\n\n");
	printf("******************************************************************************\n");

	printf("\nTriangulo DO WHILE Decremental\n\n");
	trianguloDOWhileDecremental(i);
	printf("\n");
	return 0; //valor que regresa la funci�n.
}