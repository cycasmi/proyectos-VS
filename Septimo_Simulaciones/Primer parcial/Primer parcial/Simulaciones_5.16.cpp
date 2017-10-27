// 
//
//  Created by Yoco Hern�ndez on 05/09/17.
//  Copyright � 2017 Yoco. All rights reserved.
//

/*
Instrucciones para compilar y correr:
1. Abrir la terminal o consola de comandos
2. Moverse a la ruta donde est� ubicado el archivo Simulacion5.7.cpp
3. Correr el siguiente comando para compilar: g++ Simulacion5.7.cpp
4. Correr con el siguiente comando: ./a.out
*/

#include <iostream>
#include <iomanip>
#include <random>

/*
------------------------------------------------- SUPUESTOS -------------------------------------------------
Se supone que se trabajan 160 horas al mes. Por lo que la simulaci�n es mensual.
Se supone que al haber una falla, solo una m�quina sufre descomposturas.
Si hay varios t�cnicos y una m�quina se descompone, el tiempo que toma arreglarla, se divide equitativamentre entre los t�cnicos.
Por ejemplo, si a un t�cnico le toma arreglar una m�quina en 4 horas, a 4 t�cnicos les tomar�a 1 hora arreglarla.
Pol�ticas:
1. Se tiene 1 t�cnico para reparar la m�quina con descomposturas.
2. Se tienen 2 t�cnicos para repara la m�quina con descomposturas.
3. Se tienen 3 t�cnicos para repara la m�quina con descomposturas.
4. Se tienen 4 t�cnicos para repara la m�quina con descomposturas.
5. Se tienen 5 t�cnicos para repara la m�quina con descomposturas.
------------------------------------------------- SUPUESTOS -------------------------------------------------
*/

float obtenerTiempoDescomposturas(float probabilidad);
float obtenerTiempoReparacion(float probabilidad);

/*
int main(int argc, const char * argv[]) {

	srand(time(NULL));
	//variables para la simulaci�n
	float probEntreDescomposturas = 0.0;
	float probTiempoReparacion = 0.0;
	float tiempoTrabajando = 0;
	float tiempoReparacion = 0;
	float tiempo = 0;
	float jornada = 160;

	float tiempoMaquinaOciosa = 0.0;
	float costoMaquinaOciosa = 0.0;
	float costoOperario = 0.0;
	float costoTotal = 0.0;

	float menor = 10000000000.0;
	int politicaOptima = 0;

	int tecnicos = 5;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);

	for (int i = 1; i <= tecnicos; i++) {
		//se simula un mes de trabajo
		while (tiempo < jornada) {
			//se obtiene la probabilidad de un tiempo entre descomposturas
			probEntreDescomposturas = dis(gen);
			//se obtiene la probabilidad de un tiempo de reparaci�n para una descompostura
			probTiempoReparacion = dis(gen);

			//se obtiene el tiempo trabajado hasta antes de una descompostura
			tiempoTrabajando = obtenerTiempoDescomposturas(probEntreDescomposturas);
			//se obtiene el tiempo que tarda en repararse la m�quina con la descompostura
			tiempoReparacion = obtenerTiempoReparacion(probTiempoReparacion);

			//se divide el tiempo de reparaci�n entre el n�mero de t�cnicos
			tiempoReparacion /= float(i);

			//se suma el tiempo que llevan al m�quinas trabajando en la jornada mensual, al tiempo de control
			tiempo += tiempoTrabajando;
			//se suma el tiempo que se tard� en arreglar la m�quina, al tiempo de control
			tiempo += tiempoReparacion;

			//se suma el tiempo de reparaci�n al tiempo que estuvo la m�quina sin hacer nada por la reparaci�n
			tiempoMaquinaOciosa += tiempoReparacion;
		}

		//se obtiene el costo total por las m�quina ociosas. El costo por hora de una m�quina ociosa es de $500
		costoMaquinaOciosa = tiempoMaquinaOciosa * 500;
		//se obtiene el costo total de los salarios de los t�cnicos que estuvieron arreglando las m�quinas
		costoOperario = tiempoMaquinaOciosa * 50 * i;

		//se obtiene el costo total de los salarios de los t�cnicos m�s el costo por tener las m�quinas sin hacer nada
		costoTotal = costoMaquinaOciosa + costoOperario;
		std::cout << "Pol�tica " << i << ". Costo total = $" << costoTotal << std::endl;

		//se obtiene la mejor pol�tica
		if (costoTotal < menor) {
			menor = costoTotal;
			politicaOptima = i;
		}

		//se limpian las variables para la siguiente simulaci�n
		tiempo = 0.0;
		tiempoMaquinaOciosa = 0.0;
		costoMaquinaOciosa = 0.0;
		costoOperario = 0.0;
		costoTotal = 0.0;

	}

	//resultado de la mejor pol�tica
	std::cout << "La mejor pol�tica fue la " << politicaOptima << " con un costo total de $" << menor << std::endl;


	return 0;
}
*/

//funci�n para obtener el tiempo entre descomposturas
float obtenerTiempoDescomposturas(float probabilidad) {

	float tiempo = 0;

	if (probabilidad >= 0 && probabilidad < 0.10) {
		tiempo = (6.0 + 8.0) / 2.0;
	}
	else if (probabilidad >= 0.10 && probabilidad < 0.25) {
		tiempo = (8.0 + 10.0) / 2.0;
	}
	else if (probabilidad >= 0.25 && probabilidad < 0.49) {
		tiempo = (10.0 + 12.0) / 2.0;
	}
	else if (probabilidad >= 0.49 && probabilidad < 0.75) {
		tiempo = (12.0 + 14.0) / 2.0;
	}
	else if (probabilidad >= 0.75 && probabilidad < 0.93) {
		tiempo = (16.0 + 18.0) / 2.0;
	}
	else {
		tiempo = (18.0 + 20.0) / 2.0;
	}

	return tiempo;

}

//funci�n para obtener el tiempo que repara una m�quina con una descompostura
float obtenerTiempoReparacion(float probabilidad) {

	float tiempoRep = 0.0;

	if (probabilidad >= 0 && probabilidad < 0.15) {
		tiempoRep = (2.0 + 4.0) / 2.0;
	}
	else if (probabilidad >= 0.15 && probabilidad < 0.40) {
		tiempoRep = (4.0 + 6.0) / 2.0;
	}
	else if (probabilidad >= 0.40 && probabilidad < 0.70) {
		tiempoRep = (6.0 + 8.0) / 2.0;
	}
	else if (probabilidad >= 0.70 && probabilidad < 0.90) {
		tiempoRep = (8.0 + 10.0) / 2.0;
	}
	else {
		tiempoRep = (10.0 + 12.0) / 2.0;
	}

	return tiempoRep;

}
