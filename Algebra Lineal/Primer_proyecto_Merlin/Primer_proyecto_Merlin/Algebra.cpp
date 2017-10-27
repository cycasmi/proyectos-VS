#include "Algebra.h"

void menu();

int main(){
	menu();
}

void menu(){
	Algebra a;
	int i = 0;
	int opcion;
	bool modulo = false;
	bool mov = false;

	while (i == 0){
		cout << "**********Menu**********" << endl;
		cout << "1. Introducir configuracion inicial y final" << endl;
		cout << "2. Cambiar modulo" << endl;
		cout << "3. Cambiar movimientos predeterminados <--> personalizados" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;
		if (opcion == 1){
			a.fillParameters();
		}
		else if (opcion == 2){
			if (modulo){
				cout << "Su modulo es de 2" << endl;
				a.setModulo(2);
				modulo = false;
			}
			else{
				cout << "Su modulo es de 3" << endl;
				a.setModulo(3);
				modulo = true;
			}
		}
		else if (opcion == 3){
			if (mov){
				cout << "Sus movimientos son predeterminados" << endl;
				a.setMov(1);
				mov = false;
			}
			else{
				cout << "Sus movimientos son personalizados" << endl;
				a.setMov(2);
				mov = true;
			}
		}
		else if (opcion == 4){
			i++;
		}
	}
}