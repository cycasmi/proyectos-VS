// COMPLETO
//
//  Created by Yoco Hernández on 05/09/17.
//  Copyright © 2017 Yoco. All rights reserved.
//

/*
Instrucciones para compilar y correr:
1. Abrir la terminal o consola de comandos
2. Moverse a la ruta donde esté ubicado el archivo Simulacion5.7.cpp
3. Correr el siguiente comando para compilar: g++ Simulacion5.7.cpp
4. Correr con el siguiente comando: ./a.out
*/

#include <iostream>
#include <iomanip>
#include <random>

/*
------------------------------------------------- SUPUESTOS -------------------------------------------------
Se asume que la revista inicial siempre se vende en los primeros 10 días.
Cada política se prueba durante 12 meses (1 año). Por lo que las utilidades son anuales.
------------------------------------------------- SUPUESTOS -------------------------------------------------
*/

int obtenerDemanda10Dias(float probabilidad);
int obtenerDemanda20Dias(float probabilidad);

/*
int main(int argc, const char * argv[]) {

	srand(time(NULL));
	float probDemanda10 = 0.0;
	float probDemanda20 = 0.0;
	int demanda10Dias = 0;
	int demanda20Dias = 0;

	int revistasEnPosesion = 0;
	int vendidas = 0;
	int pedido = 0;
	float costoTotal = 0.0;
	float gananciaTotal = 0.0;
	float utilidad = 0.0;
	int faltantes = 0;

	float mayor = 0.0;
	int politicaOptima = 0;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);

	//variables para la simulación
	int maximo = 15;
	int meses = 12;

	for (int i = 0; i < maximo; i++) {
		for (int j = 0; j < meses; j++) {
			probDemanda10 = dis(gen);
			probDemanda20 = dis(gen);

			//siempre se tiene una revista al inicio del mes
			revistasEnPosesion = 1;
			//costo de la revista que se compró al inicio de mes
			costoTotal = revistasEnPosesion * 1.50;
			//demanda de revistas en los primeros 10 días
			demanda10Dias = obtenerDemanda10Dias(probDemanda10);

			//se venden las revistas que se tienen en posesión
			vendidas = revistasEnPosesion;

			//revistas faltantes de la demanda de los primeros 10 días
			faltantes = demanda10Dias - revistasEnPosesion;

			//se actualizan las revistas en posesion porque ya hubo venta
			revistasEnPosesion -= vendidas;

			//CAMBIO DE PEDIDO SEGÚN LA POLÍTICA
			pedido = i;
			//costo del pedido de revistas
			costoTotal += pedido * 1.20;

			//se actualizan las revistas en posesión (para venta)
			revistasEnPosesion += pedido;

			//demanda de revistas en los 20 días restantes
			demanda20Dias = obtenerDemanda20Dias(probDemanda20);

			int sobrantes = revistasEnPosesion - demanda20Dias;
			if (sobrantes > 0) {
				//hubo sobrantes
				vendidas += revistasEnPosesion - sobrantes;
				gananciaTotal += sobrantes * 0.6;
			}
			else if (sobrantes < 0) {
				//faltaron revistas para satisfacer demanda, pero se vendieron todas las que se tenían en posesión
				vendidas += revistasEnPosesion;
			}
			else {
				//se vendieron todas las revistas en posesión y no faltaron por vender
				vendidas += revistasEnPosesion;
			}

			gananciaTotal += vendidas * 2.0;

			utilidad += gananciaTotal - costoTotal;
			costoTotal = 0.0;
			gananciaTotal = 0.0;
		}
		if (utilidad > mayor) {
			mayor = utilidad;
			politicaOptima = i;
		}
		std::cout << "Utilidad con política " << i + 1 << " (pedir " << i << " revistas) = $" << utilidad << std::endl;
		utilidad = 0.0;
	}

	std::cout << "La mejor política fue la " << politicaOptima + 1 << " con una utilidad de $" << mayor << std::endl;

	return 0;
}
*/

int obtenerDemanda10Dias(float probabilidad) {

	int revistas = 0;

	if (probabilidad >= 0 && probabilidad < 0.05) {
		revistas = 5;
	}
	else if (probabilidad >= 0.05 && probabilidad < 0.10) {
		revistas = 6;
	}
	else if (probabilidad >= 0.10 && probabilidad < 0.20) {
		revistas = 7;
	}
	else if (probabilidad >= 0.20 && probabilidad < 0.35) {
		revistas = 8;
	}
	else if (probabilidad >= 0.35 && probabilidad < 0.60) {
		revistas = 9;
	}
	else if (probabilidad >= 0.60 && probabilidad < 0.85) {
		revistas = 10;
	}
	else {
		revistas = 11;
	}

	return revistas;

}

int obtenerDemanda20Dias(float probabilidad) {

	int revistas = 0;

	if (probabilidad >= 0 && probabilidad < 0.15) {
		revistas = 4;
	}
	else if (probabilidad >= 0.15 && probabilidad < 0.35) {
		revistas = 5;
	}
	else if (probabilidad >= 0.35 && probabilidad < 0.65) {
		revistas = 6;
	}
	else if (probabilidad >= 0.65 && probabilidad < 0.85) {
		revistas = 7;
	}
	else {
		revistas = 8;
	}

	return revistas;

}
