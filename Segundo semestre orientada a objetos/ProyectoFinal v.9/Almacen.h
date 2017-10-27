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


	void agregar(int productos[], int *id, int numElem)
	{
		productos[0] += numElem;
		productos[id] += numElem;

		T* temporal = new T[productos[0]];
		
		for (int i = 0; i < productos[0] - numElem; i++)
			temporal[i] = almacen[i];

		delete []almacen;
		almacen = temporal;

	}

	int buscarString(string uno)
	{
		size_t found = nombre.find(uno);
		if (found = !string::npos)
			cout << uno << "encontrado en: " << found << endl;

			return found;

		else
			return 0;
	}

	int eliminarElem(int productos[])
	{
		for (i = 0; i < productos[14]; i++)
			delete almacen[i];

		productos[14] = 0;
		cout << "Elementos caducados eliminados.";
	}
	
	~Almacen(){ delete[]almacen; }

};