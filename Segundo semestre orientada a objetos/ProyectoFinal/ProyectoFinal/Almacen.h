#include "Lacteos.h"

template <class T>
class Almacen
{
private:
	T* almacen;
	int size;

public:
	Almacen(){}

	Almacen(int numElem)
	{
		size = numElem;
		almacen = new T[size];
	}


	void agregar(int productos[], double costo[], double precio[], int id, int numElem)
	{
		T *temporal;
		temporal = new T[productos[0]];
		for (short i = 0; i<productos[0] - numElem; i++){
			temporal[i] = almacen[i];
		}
		for (short i = productos[0] - numElem; i<productos[0]; i++)
		{
			switch (id){
			case 4:     temporal[i] = new LecheCondensada();
				productos[4]++; productos[1]++;
				break;
			case 5:     temporal[i] = new LecheDeslactosada();
				productos[5]++; productos[1]++;
				break;
			case 6:     temporal[i] = new LecheEntera();
				productos[6]++; productos[1]++;
				break;
			case 7:     temporal[i] = new LecheLight();
				productos[7]++; productos[1]++;
				break;
			case 8:     temporal[i] = new QuesoAmarillo();
				productos[8]++; productos[2]++;
				break;
			case 9:     temporal[i] = new QuesoOaxaca();
				productos[9]++; productos[2]++;
				break;
			case 10:     temporal[i] = new QuesoPanela();
				productos[10]++; productos[2]++;
				break;
			case 11:     temporal[i] = new QuesoParmesano();
				productos[11]++; productos[2]++;
				break;
			case 12:     temporal[i] = new YogurGriego();
				productos[12]++; productos[3]++;
				break;
			case 13:     temporal[i] = new YogurLight();
				productos[13]++; productos[3]++;
				break;
			default:    break;
			}
		}
		delete[]almacen;
		almacen = temporal;
	}

	int buscarString(string uno)
	{
		/*size_t found = nombre.find(uno);
		if (found = !string::npos)
			cout << uno << "encontrado en: " << found << endl;

		return found;

		else if (found != string::npos)
			cout << "No se encontro\n";*/
			return 0;
	}

	int eliminarElem( int productos[])
	{

		for (i = 0; i < productos[14]; i++)
		{
			if (almacen[i]->caducidad(casoMenuFecha) == 0)
				delete almacen[i];
		}
			

		productos[14] = 0;
		cout << "Elementos caducados eliminados.";
	}

	void comprar(int productos[], int cuenta[], double costo[], double precio[], int id, int numElem)
	{
		productos[0] -= numElem;
		productos[id] -= numElem;

		cuenta[0] += numElem;
		cuenta[id] += numElem;

		if ((id < 8) && (id > 3))
			cuenta[1] += numElem;

		if ((id < 12) && (id > 7))
			cuenta[2] += numElem;

		if ((id < 14) && (id > 11))
			cuenta[3] += numElem;

		T* temporal = new T[numElem];

		for (int i = 0; i < cuenta[id] - numElem; i++)
		{
			temporal[i] = almacen[i];
		}
			

		delete[]almacen;
		almacen = temporal;

	}
	
	~Almacen(){ delete[]almacen; }

};