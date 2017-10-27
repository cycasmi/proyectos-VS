//Nombre: Cynthia Berenice Castillo Millán
//Matrícula: A01374530
//Tarea4

#include <stdio.h>//Biblioteca que me permite utilizar printf
#include <math.h>//Biblioteca que me permite utilizar fórmulas matemáticas.

float sumatoria(short m)//Se declara el nombre de la función y se define.
//En este caso se utiliza float porque se esperan números de un tamaño considerable.
//También se define el tipo de datos que se ingresarán en la variable.
//Como en este caso serán números pequeños, se usó short.

{
	short n = 1; // Se define e inicializa la variable.
	float sumaT = 0; // Se define, nombra e inicializa el resultado.

	//Uso del ciclo WHILE.
	while (n <= m)//n es la variable que finalizará el ciclo.
				  //m es el valor final de la suma.
	{
		sumaT += pow(n, 3);//Esto es lo mismo que sumaT = sumaT + pow(n,3)
						   //Pow se utiliza para elevar el número n al segundo valor.
		n++; //Esto es lo mismo que aumentar el valor de n una unidad.
	}
	return sumaT;//Se regresa un valor.
}

double factorialnN(short m)//Se declara el nombre de la función y se define.
//En este caso se utiliza double porque se esperan números de un tamaño muy grande.
{
	short n = 1; //Se define e inicializa la variable.
	double nN = 1; //Se define e inicializa el resultado.
	//Comienza ciclo WHILE.
	while (n <= m)
	{
		nN *= n; // es igual a nm = nm * n
		n += 1; // es igual a n = n + 1
	}
	return nN;//Se regresa un valor.
}


double factorialKN(short m)//Se declara el nombre de la función y se define.
//En este caso se utiliza double porque se esperan números de un tamaño muy grande.
{
	short n = 10; //Se define e incializa la variable.
	double kn = 0;//Se define e incializa la variable.
	//Inicia WHILE
	while (n <= m)
	{
		//En la línea siguiente, se realiza el cálculo solicitado llamando a la función anterior.
		kn = ((factorialnN(m)) / ((factorialnN(8)) * (factorialnN(n - 8))));
		n += 1; //n = n + 1;
	}
	return kn;//Se regresa un valor.
}

short main()//Se define el main.
{
	//Se imprimen en pantalla los resultados solicitados.

	printf("Sumatoria de números al cubo.\n\n");
	short m = 5;
	printf("\nSumatoria del 1 al 5: %f\n", sumatoria(m));
	printf("\nSumatoria del 1 al 33: %f\n", sumatoria(33));
	printf("\nSumatoria del 1 al 100: %f\n", sumatoria(100));
	printf("\nSumatoria del 1 al 442: %f\n", sumatoria(442));
	printf("\nSumatoria del 1 al 3456: %f\n\n\n\n\n", sumatoria(3456));

	printf("Factoriales de n en k.\n\n");
	printf("\nFactorial de n igual a 10: %f\n", factorialKN(10));
	printf("\nFactorial de n igual a 21: %f\n", factorialKN(21));
	printf("\nFactorial de n igual a 35: %f\n", factorialKN(35));
	printf("\nFactorial de n igual a 46: %f\n", factorialKN(46));
	printf("\nFactorial de n igual a 68: %f\n\n\n", factorialKN(68));
	return 1;
}