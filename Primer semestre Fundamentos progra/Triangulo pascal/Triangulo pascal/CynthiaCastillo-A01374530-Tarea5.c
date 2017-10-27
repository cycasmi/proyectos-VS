//Nombre: Cynthia Berenice Castillo Millán
//Matrícula: A01374530
//Tarea5

#include <stdio.h> //Biblioteca principal que permite imprimir en pantalla.

int factorialT(int j) //Función que calcula factoriales. Se usará en la fórmula de combinaciones.
{
	int n = 1; // Declaración e iniciación de variable "contador".
	int factorial = 1; // Declaración e iniciación de variable que acumulará los resultados de la operación.

	while (n <= j) //inicio de ciclo while para calcular el factorial del número deseado.
	{
		factorial *= n; //Operación que calcula el factorial de "n" números.
		n++; //Incremento del contador (evita que se vuelva infinito).
	}
	return factorial; //valor que regresa la función.
}

void trianguloWhileIncremental(int i) //Función que imprime un triángulo de Pascal con ciclo While Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaración e iniciación de varias variables. 
									// n es el contador del primer ciclo, j el contador del segundo y factorial guarda el resultado.
	while (n <= i) //Primer ciclo: se repetirá hasta que el primer contador (n) alcance el valor solicitado "i".
	{
		while (j <= n) //Segundo ciclo: Se repetirá hasta que el segundo contador (j) alcance al valor de "n".
		{
			factorial = factorialT(n)/((factorialT(j))*(factorialT(n-j))); //Fórmula para calcular combinaciones. Donde n es n y j, k. (n k)
			printf("%d\t", factorial); //impresión del resultado de "factorial" con un tabulador (éste separará los números).
			j++; //aumento de variable j (evita que el ciclo se haga infinitamente).
		}
		j = 0; //Se restaura el valor inicial de j para que el segundo ciclo no se vea afectado.
		printf("\n"); //impresión de un espacio para separar las filas del triángulo de Pascal.
		n++; // Aumento de variable n (evita que el ciclo se haga infinitamente).
	}
}

void trianguloWhileDecremental(int i) //Función que imprime un triángulo de Pascal con ciclo While Decremental.
{
	int n = i, j = i - n, factorial = 0;//Declaración e iniciación de varias variables. 

	while (n >= 0) //Primer ciclo : se repetirá hasta que n (que es igual al valor solicitado) disminuya hasta el 0.
	{
		while (j >= 0) //Segundo ciclo : se repetirá hasta que j disminuya hasta el 0.
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j)); //Fórmula para calcular combinaciones. Donde:
																					//(i-n) igual "n" y j es igual a "k"  (n k)
			j--; // disminución de variable j.
			printf("%d\t", factorial); // impresión de valores de la fórmula.
		}
		n--; //disminución de variable n
		j = i - n; //Se restaura el valor inicial de j (después de haber disminuido la n).
		printf("\n"); //Separa las filas del triángulo.
	}
}

void trianguloForIncremental(int i)// Función que imprime un triángulo de Pascal con ciclo For Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaración e iniciación de varias variables. 

	for (n = 0; n <= i; n++) //Primer ciclo: se inicializa contador n, se pone una condición y se aumenta
							// n hasta llegar al valor deseado i.
	{
		for (j = 0; j <= n; j++) //Segundo ciclo: Se inicia contador j, se pone una condición y se aumenta
								// j hasta llegar al valor de n.
		{
			factorial = factorialT(n) / (factorialT(j)*(factorialT(n - j))); //Fórmula para calcular combinaciones en incrementales.
			printf("%d\t", factorial); //Impresión del valor de factorial
		}
		j = 0; //Se reinstraura el valor inicial de j.
		printf("\n"); //Separa las filas del triángulo.
	}
}

void trianguloForDecremental(int i) // Función que imprime un triángulo de Pascal con ciclo For Decremental.
{
	int n = i, j = n-i, factorial = 0;//Declaración e iniciación de varias variables. 
	
	for (n = i; n >= 0; n--)// Primer ciclo: Se inicializa n como el valor deseado, se pone una condición
							// n disminuirá hasta llegar al valor de 0
	{
		for (j = i - n; j >= 0; j--) //Segundo ciclo: se inicia j como el número deseado menos el valor de n,
									//Se pone una condición, j disminuirá hasta alcanzar el valor de i-n
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j));//Formula que calcula combinaciones en ciclos decrementales.
			printf("%d\t", factorial); //impresión de factorial.
		}
		printf("\n"); //Separa las filas del triángulo
	}
}

void trianguloDOWhileIncremental(int i) // Función que imprime un triángulo de Pascal con ciclo Do While Incremental.
{
	int n = 0, j = 0, factorial = 0; //Declaración e iniciación de varias variables.

	do //Inicio de primer ciclo: Se realizará do hasta que n alcance el valor deseado i.
	{
		do //Inicio de segundo ciclo: Se realizará la fórmula de combinaciones hasta que j sea mayor a n.
		{
			factorial = factorialT(n) / (factorialT(j)*(factorialT(n - j))); //fórmula para calcular combinaciones
			printf("%d\t", factorial); //impresión de factorial
			j++; //Aumento de j.
		}
		while (j <= n); //Condición que determina el fin del ciclo Do While
		j = 0; //Se reinstaura el valor original de j.
		printf("\n"); //Separa las filas de valores del triángulo
		n++; //aumento de n.
	}
	while (n <= i); //Condición que determina el fin del segundo ciclo While.
}

void trianguloDOWhileDecremental(int i) //Función que realiza un triángulo de Pascal con un ciclo Do While decremental.
{
	int n = i, j = i-n, factorial = 0; //inicialización y declaración de varias variables.

	do//inicio de primer ciclo: Se detendrá cuando el valor de n sea inferior a 0. Mientras tanto, realizará otro ciclo.
	{
		do // inicio de segundo ciclo: Se detendrá cuando el valor de j sea menor a 0. Mientras tanto, realizará una operación.
		{
			factorial = factorialT(i - n) / (factorialT(j)*factorialT((i - n) - j)); //Operación que calcula las combinaciones.
			printf("%d\t", factorial); // imprime los valores de factorial 
			j--; //disminuye j para que el ciclo tenga fin.
		} 
		while (j >= 0); //Condición: j sigue siendo mayor a 0
		n--; //Disminución de n para evitar que el ciclo sea infinito.
		j = i-n; //Se reinstaura el valor inicial de j
		printf("\n"); //Separa las filas de valores del triángulo.
	} 
	while (n >= 0); //Condición del segundo ciclo: Se detendrá cuando n sea inferior a 0.
}

int main() //Función principal en la que se llaman las demás funciones.
{
	int i = 10; //declaración e inicialización de la variable i (valor que se utiliza en todas las funciones)
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
	return 0; //valor que regresa la función.
}