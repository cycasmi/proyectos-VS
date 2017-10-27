
// COMPLETO
//
//  Created by Yoco Hern�ndez on 05/09/17.
//  Copyright � 2017 Yoco. All rights reserved.
//

/*
Instrucciones para compilar y correr:
1. Abrir la terminal o consola de comandos
2. Moverse a la ruta donde est� ubicado el archivo Simulacion5.6.cpp
3. Correr el siguiente comando para compilar: g++ Simulacion5.6.cpp
4. Correr con el siguiente comando: ./a.out
*/

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

//funci�n para generar nuevos tiempos de vida para los componentes de la m�quina
int nuevosComponentes(std::vector<int> & componentes);
//funci�n para generar nuevo componente que se descompone
int actualizarComponente(std::vector<int> & componentes);

//variables para la distribuci�n normal
std::random_device rd;
std::mt19937 gen(rd());

//distribucion normal con media de 600 horas y desviaci�n est�ndar de 100 horas
std::normal_distribution<> d(600, 100);

/*
int main(int argc, const char * argv[]) {

	//vector para guardar los tiempos de vida de 4 componentes
	std::vector<int> componentes;
	//vector para guardar los tiempos de vida de 4 componentes
	std::vector<int> componentes2;
	//tiempo de operaci�n para la pol�tica 1
	int tiempoOperacion = 20000;
	//costo total de la pol�tica 1
	int costoPolitica1 = 0;
	//costo total de la pol�tica 2
	int costoPolitica2 = 0;

	//- - - - - - - - - - - - - - - - - Pol�tica 1 - - - - - - - - - - - - - - - - - -
	//Se reemplaza solo el componente que falla y los dem�s se dejan
	int tiempoCompReemplazado = nuevosComponentes(componentes);

	while (tiempoOperacion > tiempoCompReemplazado){
		//paso del tiempo para la pol�tica 1 (1 hora para reemplazar el componente da�ado + tiempo de vida del componente da�ado)
		tiempoOperacion -= tiempoCompReemplazado + 1;

		//$200 del componente reemplazado + $100 por la desconexi�n de 1 hora de la m�quina (pol�tica 1)
		costoPolitica1 += 300;

		//se guarda en 'tiempoCompReemplazado' el tiempo del componente m�s pr�ximo a ser reemplazado
		tiempoCompReemplazado = actualizarComponente(componentes);
	}
	//- - - - - - - - - - - - - - - - - Pol�tica 1 - - - - - - - - - - - - - - - - - -

	//- - - - - - - - - - - - - - - - - Pol�tica 2 - - - - - - - - - - - - - - - - - -
	//Se reemplazan los cuatro componentes si falla uno
	//se resetea el tiempo de operaci�n para la prueba de la segunda pol�tica
	tiempoOperacion = 20000;

	//tiempo de vida del componente que da��
	tiempoCompReemplazado = nuevosComponentes(componentes2);

	while (tiempoOperacion > tiempoCompReemplazado) {

		//paso del tiempo para la pol�tica 2 (2 horas para reemplazar el componente da�ado + tiempo de vida del componente da�ado)
		tiempoOperacion -= tiempoCompReemplazado + 2;

		//$800 de los 4 componentes reemplazados + $200 por la desconexi�n de 2 horas de la m�quina (pol�tica 2)
		costoPolitica2 += 1000;

		//se borran los tiempos de vida de los componentes en el vector
		componentes2.clear();
		//se toman nuevos tiempos de vida y se guarda en 'tiempoCompReemplazado' el tiempo del componente m�s pr�ximo a ser reemplazado
		tiempoCompReemplazado = nuevosComponentes(componentes2);
	}
	//- - - - - - - - - - - - - - - - - Pol�tica 2 - - - - - - - - - - - - - - - - - -


	//- - - - - - - - - - - - - - - - - Resultados - - - - - - - - - - - - - - - - - -
	std::cout << "Pol�tica 1 - costo de reemplazar un componente cuando se descompone: $" << costoPolitica1 << std::endl;
	std::cout << "Pol�tica 2 - costo de reemplazar todos los componentes cuando uno se descompone: $" << costoPolitica2 << std::endl;

	std::cout << std::endl;

	if (costoPolitica1 < costoPolitica2) {
		std::cout << "La pol�tica 1 es m�s barata" << std::endl;
	}
	else {
		std::cout << "La pol�tica 2 es m�s barata" << std::endl;
	}
	//- - - - - - - - - - - - - - - - - Resultados - - - - - - - - - - - - - - - - - -

}//cierre del main
*/

//funci�n para generar nuevos tiempos de vida para los componentes de la m�quina
int nuevosComponentes(std::vector<int> & componentes){

	int numComponentes = 4;
	int tiempo = 0;
	//se genera un tiempo de vida para cada componente y se mete al vector de componentes
	for (int i = 0; i < numComponentes; i++) {
		tiempo = std::round(d(gen));
		componentes.push_back(tiempo);
	}

	//se ordenan de menor a mayor los tiempos de vida
	std::sort(componentes.begin(), componentes.end());

	//se regresa el tiempo del componente m�s pr�ximo a ser reemplazado
	return componentes.front();

}

/*
funci�n para seleccionar el componente m�s pr�ximo a ser reemplazado, actualizar los
tiempos de vida de los dem�s componentes y reemplazar el componente m�s pr�ximo a
ser reemplazado
*/
int actualizarComponente(std::vector<int> & componentes){
	int tiempoCompReemplazado = 0;

	//se ordenan de menor a mayor los tiempos de vida
	std::sort(componentes.begin(), componentes.end());
	//se guarda en 'tiempoCompReemplazado' el tiempo del componente m�s pr�ximo a ser reemplazado
	tiempoCompReemplazado = componentes.front();

	//se actualizan los tiempos de vida de los dem�s componentes
	for (int i = 1; i < componentes.size(); i++) {
		componentes[i] -= tiempoCompReemplazado;
	}

	//se quita el componente m�s pr�ximo a fallar
	componentes.erase(componentes.begin());

	//se reemplaza el componente m�s pr�ximo a fallar
	componentes.push_back(std::round(d(gen)));

	//se regresa el tiempo del componente m�s pr�ximo a ser reemplazado
	return tiempoCompReemplazado;

}