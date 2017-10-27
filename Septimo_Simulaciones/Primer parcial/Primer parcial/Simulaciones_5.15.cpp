// COMPLETO
//
//  Created by Yoco Hernández on 05/09/17.
//  Copyright © 2017 Yoco. All rights reserved.
//

/*
Instrucciones para compilar y correr:
1. Abrir la terminal o consola de comandos
2. Moverse a la ruta donde esté ubicado el archivo Simulacion5.15.cpp
3. Correr el siguiente comando para compilar: g++ Simulacion5.15.cpp
4. Correr con el siguiente comando: ./a.out
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <random>

/*
------------------------------------------------- SUPUESTOS -------------------------------------------------
Se asume que se logran hacer 4 viajes durante la jornada de trabajo.
------------------------------------------------- SUPUESTOS -------------------------------------------------
*/

//valor máximo de camiones que tiene la empresa que se desea evaluar
int N = 30;
//funcion que obtiene la produccion diaria al recibir la probabilidad
float produccionDiaria(float probabilidad);
//funcion que obtiene el transporte diario al recibir la probabilidad
float toneladasTransportadas(float probabilidad);

/*
int main() {

	srand(time(NULL));
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_real_distribution<> dis(0, 1);

	//vector donde se guarda la relacion entre camiones y costos totales
	std::vector<std::pair<float, int> > camionesCostoTotal(N);
	float randomProduccion = 0;
	float randomTransporte = 0;

	//ciclo de 1 a N donde se varía la cantidad de camiones que contrata la empresa
	for (int j = 1; j < N; j++) {
		float costoAnual = 100000 * j;

		//ciclo de 1 a 250 que simula la producción y transporte del año
		for (int i = 0; i < 250; i++) {
			float produccionDia = 0;
			float transporteDiario = 0;

			//valor aleatorio para la producción
			randomProduccion = dis(gen);
			//valor aleatorio para el transporte
			randomTransporte = dis(gen);

			produccionDia = produccionDiaria(randomProduccion);
			transporteDiario = toneladasTransportadas(randomTransporte);
			//SUPUESTO: viajes que alcanza a realizar en una jornada de ocho horas
			float viajes = 4;
			float restante = produccionDia - (transporteDiario *  j * viajes);

			if (restante > 0) {
				costoAnual = costoAnual + (restante * 100);
			}
		}
		camionesCostoTotal[j - 1] = std::pair<float, int>(costoAnual, j);
	}

	std::sort(camionesCostoTotal.begin(), camionesCostoTotal.end());

	std::cout << "Numero de camiones óptimo: " << camionesCostoTotal[1].second << std::endl << "Costo: " << camionesCostoTotal[1].first << std::endl;
}
*/

//funcion que obtiene la produccion diaria al recibir la probabilidad 
float produccionDiaria(float probabilidad) {
	float produccion = 0;

	if (probabilidad >= 0 && probabilidad < 0.10) {
		produccion = (50.0 + 55.0) / 2.0;
	}
	else if (probabilidad >= 0.10 && probabilidad < 0.25) {
		produccion = (55.0 + 60.0) / 2.0;
	}
	else if (probabilidad >= 0.25 && probabilidad < 0.55) {
		produccion = (60.0 + 65.0) / 2.0;
	}
	else if (probabilidad >= 0.55 && probabilidad < 0.90) {
		produccion = (65.0 + 70.0) / 2.0;
	}
	else if (probabilidad >= 0.90 && probabilidad < 0.98) {
		produccion = (75.0 + 80.0) / 2.0;
	}
	else {
		produccion = (80.0 + 85.0) / 2.0;
	}

	return produccion;
}

//funcion que obtiene la produccion diaria al recibir la probabilidad
float toneladasTransportadas(float probabilidad) {
	float toneladas = 0;

	if (probabilidad >= 0 && probabilidad < 0.30) {
		toneladas = (4.0 + 4.5) / 2.0;
	}
	else if (probabilidad >= 0.30 && probabilidad < 0.70) {
		toneladas = (4.5 + 5.0) / 2.0;
	}
	else if (probabilidad >= 0.70 && probabilidad < 0.90) {
		toneladas = (5.0 + 5.5) / 2.0;
	}
	else {
		toneladas = (5.5 + 6.0) / 2.0;
	}

	return toneladas;
}
