
// COMPLETO
//
//  Created by Yoco Hernández on 05/09/17.
//  Copyright © 2017 Yoco. All rights reserved.
//

/*
Instrucciones para compilar y correr:
1. Abrir la terminal o consola de comandos
2. Moverse a la ruta donde esté ubicado el archivo Simulacion5.6.cpp
3. Correr el siguiente comando para compilar: g++ Simulacion5.6.cpp
4. Correr con el siguiente comando: ./a.out
*/

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

//función para generar nuevos tiempos de vida para los componentes de la máquina
int nuevosComponentes(std::vector<int> & componentes);
//función para generar nuevo componente que se descompone
int actualizarComponente(std::vector<int> & componentes);

//variables para la distribución normal
std::random_device rd;
std::mt19937 gen(rd());

//distribucion normal con media de 600 horas y desviación estándar de 100 horas
std::normal_distribution<> d(600, 100);

/*
int main(int argc, const char * argv[]) {

	//vector para guardar los tiempos de vida de 4 componentes
	std::vector<int> componentes;
	//vector para guardar los tiempos de vida de 4 componentes
	std::vector<int> componentes2;
	//tiempo de operación para la política 1
	int tiempoOperacion = 20000;
	//costo total de la política 1
	int costoPolitica1 = 0;
	//costo total de la política 2
	int costoPolitica2 = 0;

	//- - - - - - - - - - - - - - - - - Política 1 - - - - - - - - - - - - - - - - - -
	//Se reemplaza solo el componente que falla y los demás se dejan
	int tiempoCompReemplazado = nuevosComponentes(componentes);

	while (tiempoOperacion > tiempoCompReemplazado){
		//paso del tiempo para la política 1 (1 hora para reemplazar el componente dañado + tiempo de vida del componente dañado)
		tiempoOperacion -= tiempoCompReemplazado + 1;

		//$200 del componente reemplazado + $100 por la desconexión de 1 hora de la máquina (política 1)
		costoPolitica1 += 300;

		//se guarda en 'tiempoCompReemplazado' el tiempo del componente más próximo a ser reemplazado
		tiempoCompReemplazado = actualizarComponente(componentes);
	}
	//- - - - - - - - - - - - - - - - - Política 1 - - - - - - - - - - - - - - - - - -

	//- - - - - - - - - - - - - - - - - Política 2 - - - - - - - - - - - - - - - - - -
	//Se reemplazan los cuatro componentes si falla uno
	//se resetea el tiempo de operación para la prueba de la segunda política
	tiempoOperacion = 20000;

	//tiempo de vida del componente que dañó
	tiempoCompReemplazado = nuevosComponentes(componentes2);

	while (tiempoOperacion > tiempoCompReemplazado) {

		//paso del tiempo para la política 2 (2 horas para reemplazar el componente dañado + tiempo de vida del componente dañado)
		tiempoOperacion -= tiempoCompReemplazado + 2;

		//$800 de los 4 componentes reemplazados + $200 por la desconexión de 2 horas de la máquina (política 2)
		costoPolitica2 += 1000;

		//se borran los tiempos de vida de los componentes en el vector
		componentes2.clear();
		//se toman nuevos tiempos de vida y se guarda en 'tiempoCompReemplazado' el tiempo del componente más próximo a ser reemplazado
		tiempoCompReemplazado = nuevosComponentes(componentes2);
	}
	//- - - - - - - - - - - - - - - - - Política 2 - - - - - - - - - - - - - - - - - -


	//- - - - - - - - - - - - - - - - - Resultados - - - - - - - - - - - - - - - - - -
	std::cout << "Política 1 - costo de reemplazar un componente cuando se descompone: $" << costoPolitica1 << std::endl;
	std::cout << "Política 2 - costo de reemplazar todos los componentes cuando uno se descompone: $" << costoPolitica2 << std::endl;

	std::cout << std::endl;

	if (costoPolitica1 < costoPolitica2) {
		std::cout << "La política 1 es más barata" << std::endl;
	}
	else {
		std::cout << "La política 2 es más barata" << std::endl;
	}
	//- - - - - - - - - - - - - - - - - Resultados - - - - - - - - - - - - - - - - - -

}//cierre del main
*/

//función para generar nuevos tiempos de vida para los componentes de la máquina
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

	//se regresa el tiempo del componente más próximo a ser reemplazado
	return componentes.front();

}

/*
función para seleccionar el componente más próximo a ser reemplazado, actualizar los
tiempos de vida de los demás componentes y reemplazar el componente más próximo a
ser reemplazado
*/
int actualizarComponente(std::vector<int> & componentes){
	int tiempoCompReemplazado = 0;

	//se ordenan de menor a mayor los tiempos de vida
	std::sort(componentes.begin(), componentes.end());
	//se guarda en 'tiempoCompReemplazado' el tiempo del componente más próximo a ser reemplazado
	tiempoCompReemplazado = componentes.front();

	//se actualizan los tiempos de vida de los demás componentes
	for (int i = 1; i < componentes.size(); i++) {
		componentes[i] -= tiempoCompReemplazado;
	}

	//se quita el componente más próximo a fallar
	componentes.erase(componentes.begin());

	//se reemplaza el componente más próximo a fallar
	componentes.push_back(std::round(d(gen)));

	//se regresa el tiempo del componente más próximo a ser reemplazado
	return tiempoCompReemplazado;

}