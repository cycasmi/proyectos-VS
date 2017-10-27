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
		productos[0] += numElem;
		productos[id] += numElem;

		if ((id < 8) && (id > 3))
			productos[1] += numElem;

		if ((id < 12) && (id > 7))
			productos[2] += numElem;

		if ((id < 14) && (id > 11))
			productos[3] += numElem;

		T* temporal = new T[productos[0]];
		
		for (int i = 0; i < productos[0] - numElem; i++)
			temporal[i] = almacen[i];

		delete []almacen;
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
			delete almacen[i];

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