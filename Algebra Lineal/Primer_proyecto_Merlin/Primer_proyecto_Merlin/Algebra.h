#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

class Algebra{
private:
	int** inicial; // es la matriz preconfigurada
	int** final; // es la matriz objetivo
	int** compuesto; // recibe la suma de la matriz inicial a la matriz meta
	int** matriz; // matriz que resulta de la multiplicacion de la matriz compuesta con la inversa
	int modulo = 2;
	int col = 1;
	int row = 9;
	int mov1[9] = { 1, 1, 0, 1, 1, 0, 0, 0, 0 }; // de mov1 a mov9 son los movimientos que constantemente iran cambiando según el usuario lo pida
	int mov2[9] = { 1, 1, 1, 0, 0, 0, 0, 0, 0 }; // sin embargo ya vienen con los movimientos predeterminados por default
	int mov3[9] = { 0, 1, 1, 0, 1, 1, 0, 0, 0 };
	int mov4[9] = { 1, 0, 0, 1, 0, 0, 1, 0, 0 };
	int mov5[9] = { 0, 1, 0, 1, 1, 1, 0, 1, 0 };
	int mov6[9] = { 0, 0, 1, 0, 0, 1, 0, 0, 1 };
	int mov7[9] = { 0, 0, 0, 1, 1, 0, 1, 1, 0 };
	int mov8[9] = { 0, 0, 0, 0, 0, 0, 1, 1, 1 };
	int mov9[9] = { 0, 0, 0, 0, 1, 1, 0, 1, 1 };
	int mov1pr[9] = { 1, 1, 0, 1, 1, 0, 0, 0, 0 }; // de mov1pr a mov9pr son los movimientos preestablecidos en el juego
	int mov2pr[9] = { 1, 1, 1, 0, 0, 0, 0, 0, 0 };
	int mov3pr[9] = { 0, 1, 1, 0, 1, 1, 0, 0, 0 };
	int mov4pr[9] = { 1, 0, 0, 1, 0, 0, 1, 0, 0 };
	int mov5pr[9] = { 0, 1, 0, 1, 1, 1, 0, 1, 0 };
	int mov6pr[9] = { 0, 0, 1, 0, 0, 1, 0, 0, 1 };
	int mov7pr[9] = { 0, 0, 0, 1, 1, 0, 1, 1, 0 };
	int mov8pr[9] = { 0, 0, 0, 0, 0, 0, 1, 1, 1 };
	int mov9pr[9] = { 0, 0, 0, 0, 1, 1, 0, 1, 1 };
	int mov1pe[9] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 }; // de mov1pe a mov9pe son los movimientos personalizados por nosotros
	int	mov2pe[9] = { 0, 1, 1, 1, 1, 1, 1, 1, 1 };
	int	mov3pe[9] = { 0, 0, 1, 1, 1, 1, 1, 1, 1 };
	int	mov4pe[9] = { 0, 0, 0, 1, 1, 1, 1, 1, 1 };
	int	mov5pe[9] = { 0, 0, 0, 0, 1, 1, 1, 1, 1 };
	int	mov6pe[9] = { 0, 0, 0, 0, 0, 1, 1, 1, 1 };
	int	mov7pe[9] = { 0, 0, 0, 0, 0, 0, 1, 1, 1 };
	int	mov8pe[9] = { 0, 0, 0, 0, 0, 0, 0, 1, 1 };
	int	mov9pe[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 1 };
	int inv[9][9] = { { 1, 0, 1, 0, 0, 1, 1, 1, 0 },
	{ 1, 1, 1, 1, 1, 1, 0, 0, 0 }, //es la matriz inversa que ira cambiando según lo pida el usuario
	{ 1, 0, 1, 1, 0, 0, 0, 1, 1 }, //sin embargo tiene por default la matriz inversa de movimientos predeterminados
	{ 1, 1, 0, 1, 1, 0, 1, 1, 0 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 0, 1, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 0, 1, 1, 0, 1 },
	{ 0, 0, 0, 1, 1, 1, 1, 1, 1 },
	{ 0, 1, 1, 1, 0, 0, 1, 0, 1 } };
	int invpr[9][9] = { { 1, 0, 1, 0, 0, 1, 1, 1, 0 },
	{ 1, 1, 1, 1, 1, 1, 0, 0, 0 }, //matriz inversa de movimientos predeterminaods
	{ 1, 0, 1, 1, 0, 0, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 1, 0 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 0, 1, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 0, 1, 1, 0, 1 },
	{ 0, 0, 0, 1, 1, 1, 1, 1, 1 },
	{ 0, 1, 1, 1, 0, 0, 1, 0, 1 } };
	int invpe[9][9] = { { 1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 0, 0, 0, 0, 0, 0, 0 }, // matriz inversa de movimientos personalizados
	{ 0, 1, 1, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 1, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 1, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 1, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 1, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 1, 1 } };
	int invpr3[9][9] = { { 1, 1, 1, 1, 1, 0, 1, 0, 2 }, //inversa de modulo 3 de movimientos predeterminados
	{ 0, 1, 0, 1, 1, 1, 2, 2, 2 },
	{ 1, 1, 1, 0, 1, 1, 2, 0, 1 },
	{ 0, 1, 2, 1, 1, 2, 0, 1, 2 },
	{ 1, 1, 1, 1, 0, 1, 1, 1, 1 },
	{ 2, 1, 0, 2, 1, 1, 2, 1, 0 },
	{ 1, 0, 2, 1, 1, 0, 1, 1, 1 },
	{ 2, 2, 2, 1, 1, 1, 0, 1, 0 },
	{ 2, 0, 1, 0, 1, 1, 1, 1, 1 } };
	int invpe3[9][9] = { { 1, 0, 0, 0, 0, 0, 0, 0, 0 },	//inversa de modulo 3 de movimientos personalizados
	{ -1, 1, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, -1, 1, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, -1, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, -1, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, -1, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, -1, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, -1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, -1, 1 } };

public:
	void fillParameters();
	void start(string primera, string segunda);
	void sumaMatrices();
	void setModulo(int _modulo);
	void leerMatriz(int** a);
	void transformaciones(int** movimientos);
	int** sumaMov(int** borrador, int* mov);
	void multiplicacionMatrices();
	void presentacion();
	void setMov(int tipo);

};

void Algebra::setMov(int tipo){ //cambia la configuracion de movimientos segun lo pida el usuario
	if (tipo == 1){
		if (modulo == 3){
			for (int i = 0; i < row; i++){
				mov1[i] = mov1pr[i];
				mov2[i] = mov2pr[i];
				mov3[i] = mov3pr[i];
				mov4[i] = mov4pr[i];
				mov5[i] = mov5pr[i];
				mov6[i] = mov6pr[i];
				mov7[i] = mov7pr[i];
				mov8[i] = mov8pr[i];
				mov9[i] = mov9pr[i];
				for (int j = 0; j < row; j++)
					inv[i][j] = invpr3[i][j];
			}
		}
		else{
			for (int i = 0; i < row; i++){
				mov1[i] = mov1pr[i];
				mov2[i] = mov2pr[i];
				mov3[i] = mov3pr[i];
				mov4[i] = mov4pr[i];
				mov5[i] = mov5pr[i];
				mov6[i] = mov6pr[i];
				mov7[i] = mov7pr[i];
				mov8[i] = mov8pr[i];
				mov9[i] = mov9pr[i];
				for (int j = 0; j < row; j++)
					inv[i][j] = invpr[i][j];
			}
		}
	}
	else if (tipo == 2){
		if (modulo == 3){
			for (int i = 0; i < row; i++){
				mov1[i] = mov1pe[i];
				mov2[i] = mov2pe[i];
				mov3[i] = mov3pe[i];
				mov4[i] = mov4pe[i];
				mov5[i] = mov5pe[i];
				mov6[i] = mov6pe[i];
				mov7[i] = mov7pe[i];
				mov8[i] = mov8pe[i];
				mov9[i] = mov9pe[i];
				for (int j = 0; j < row; j++)
					inv[i][j] = invpe3[i][j];
			}
		}
		else{
			for (int i = 0; i < row; i++){
				mov1[i] = mov1pe[i];
				mov2[i] = mov2pe[i];
				mov3[i] = mov3pe[i];
				mov4[i] = mov4pe[i];
				mov5[i] = mov5pe[i];
				mov6[i] = mov6pe[i];
				mov7[i] = mov7pe[i];
				mov8[i] = mov8pe[i];
				mov9[i] = mov9pe[i];
				for (int j = 0; j < row; j++)
					inv[i][j] = invpe[i][j];
			}
		}
	}
}

void Algebra::fillParameters(){
	int counter = 0;
	while (counter == 0)
	{
		string a;
		string b;
		cout << "Escribe tu configuracion inicial, ejemplo: 000101110" << endl;
		cin >> a;
		cout << "Escribe tu configuracion final, ejemplo: 000101110" << endl;
		cin >> b;
		if (a.size() == 9 && b.size() == 9){ //detecta si la matriz inicial y final tienen el tamaño adecuado
			start(a, b); //convierte de string a matriz la matriz inicial y final
			presentacion(); //presenta en matriz 3 x 3 la matriz inicial y final
			sumaMatrices(); // suma matriz inicial y final
			multiplicacionMatrices(); // multiplica la matriz compuesta por su inversa
			leerMatriz(matriz);
			transformaciones(matriz); //se visualiza cada transformacion de la matriz inicial a final
			counter++;
		}
		else{
			cout << "Se tiene que introducir 9 caracteres en cada parametro" << endl;
		}
	}
}

void Algebra::start(string primera, string segunda){ //en esta funcion se inicializan las matrices inicial y final
	int molde;
	inicial = new int*[col];
	final = new int*[col];
	for (int i = 0; i < col; i++)
	{
		inicial[i] = new int[row];
		final[i] = new int[row];
	}
	for (int i = 0; i < col; i++) // reciben los string, para cada digito convertirlo en int
	{							 // guardandola en su respectiva posicion matriz		
		for (int j = 0; j < row; j++)
		{
			molde = primera[j] - '0';
			inicial[i][j] = molde;
			molde = segunda[j] - '0';
			final[i][j] = molde;
		}
	}
}

int** Algebra::sumaMov(int** borrador, int* mov){ //va sumando movimiento por movimiento en la matriz
	for (int i = 0; i<row; i++){ // suma cada una de las celdas en las que afecta un movimiento en especifico
		if (mov[i] == 1){
			borrador[0][i] += 1;
			borrador[0][i] %= modulo;
		}
	}
	for (int i = 0; i < row; i++){ //imprime el resultado de la transformacion en una matriz 3 * 3
		cout << borrador[0][i] << " ";
		if ((i + 1) % 3 == 0)
			cout << endl;
	}
	cout << endl;
	return borrador;
}

void Algebra::transformaciones(int** cambios){ //funcion que se encarga de visualizar todas las transformaciones de una matriz inicial a final
	int** molde = inicial;
	int movs[9] = {};

	for (int i = 0; i < row; i++){
		movs[i] = cambios[0][i];
	}

	for (int i = 1; i <= row; i++){
		if (movs[i - 1] == 1){ //detecta si se oprimio boton
			if (i == 1){	//detecta en que posicion se oprimio boton
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov1);
			}
			else if (i == 2){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov2);
			}
			else if (i == 3){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov3);
			}
			else if (i == 4){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov4);
			}
			else if (i == 5){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov5);
			}
			else if (i == 6){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov6);
			}
			else if (i == 7){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov7);
			}
			else if (i == 8){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov8);
			}
			else if (i == 9){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov9);
			}
		}
		else if (movs[i - 1] == 2){ //detecta cuando dos veces se debe oprimir un boton
			if (i == 1){ 	//detecta en que posicion se oprimio boton
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov1);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov1);
			}
			else if (i == 2){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov2);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov2);
			}
			else if (i == 3){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov3);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov3);
			}
			else if (i == 4){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov4);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov4);
			}
			else if (i == 5){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov5);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov5);
			}
			else if (i == 6){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov6);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov6);
			}
			else if (i == 7){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov7);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov7);
			}
			else if (i == 8){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov8);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov8);
			}
			else if (i == 9){
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov9);
				cout << "Se presiono el boton " << i << endl;
				molde = sumaMov(molde, mov9);
			}
		}
	}
	cout << endl;
}

void Algebra::sumaMatrices(){ //funcion que suma la matriz inicial y la final
	compuesto = new int*[col];
	for (int i = 0; i < col; i++) //inicializa la matriz compuesta
	{
		compuesto[i] = new int[row];
	}
	if (modulo == 2) {
		for (int i = 0; i < col; i++) //realiza suma de matrices
		{
			for (int j = 0; j < row; j++)
			{
				compuesto[i][j] = inicial[i][j] + final[i][j];
			}
		}
	}
	else if (modulo == 3){
		for (int i = 0; i < col; i++) //realiza resta de matrices
		{
			for (int j = 0; j < row; j++)
			{
				compuesto[i][j] = final[i][j] - inicial[i][j];
				if (compuesto[i][j] == -1)
					compuesto[i][j] = 2;
				else if (compuesto[i][j] == -2)
					compuesto[i][j] = 1;
				compuesto[i][j] %= modulo;
			}
		}
		setMov(1);
	}
}

void Algebra::presentacion(){ //se visualiza la matriz inicial y final en una matriz 3 x 3
	cout << "Su configuracion inicial es la siguiente" << endl;
	for (int i = 0; i < row; i++){
		cout << inicial[0][i] << " ";
		if ((i + 1) % 3 == 0)
			cout << endl;
	}
	cout << endl;
	cout << "Su configuracion final es la siguiente" << endl;
	for (int i = 0; i < row; i++){
		cout << final[0][i] << " ";
		if ((i + 1) % 3 == 0)
			cout << endl;
	}
	cout << endl;
}

void Algebra::multiplicacionMatrices(){ //multiplica la matriz compuesta por la matriz inversa
	int celda = 0;
	matriz = new int*[col];
	for (int i = 0; i < col; i++) //inicializa la matriz
	{
		matriz[i] = new int[row];
	}
	for (int i = 0; i < 9; i++){ //realiza la multiplicacion
		for (int j = 0; j < row; j++){
			celda += (compuesto[0][j] * inv[i][j]);
		}
		celda %= modulo;
		matriz[0][i] = celda;
		celda = 0;
	}
	//for(int i=0; i<row; i++)
	//	cout << matriz[0][i] << endl;
}

void Algebra::leerMatriz(int** a){	//lee la solucion 
	int movs[9] = {};

	for (int i = 0; i < row; i++){
		movs[i] = a[0][i];
	}
	cout << "Presionar los siguientes botones " << endl;
	for (int i = 0; i<row; i++){
		if (movs[i] == 1)
			cout << i + 1 << " ";
		else if (movs[i] == 2){
			cout << i + 1 << " ";
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}

void Algebra::setModulo(int _modulo){
	modulo = _modulo;
}
