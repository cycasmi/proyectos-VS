template <class T>
class Almacen
{
private:
	T* almacen;
	int size;

public:
	Almacen(){}

	Almacen(int numElem, int numTotal)
	{
		size = numElem;
		almacen = new T[size];
		numTotal += numElem;
	}


	void agregar(Almacen producto[], int tipo, int numElem, int numTotal)
	{
		almacen[numTotal] = producto[tipo];
		numTotal++;

		if (numTotal == size)
		{
			T *newAlmacen = new T[size + 5]; //Se defini� nuevo arreglo. Ahora se debe copiar los elementos a �ste.
			for (int i = 0; i < numTotal; i++)
			{
				newAlmacen[i] = almacen[i];
			}

			delete[]almacen; //Ahora borramos este que no nos sirve, el apuntador;
			almacen = newAlmacen;
		}

	}

	/*int buscarString(string uno)
	{
		size_t found = nombre.find(uno);
		if (found = !string::npos)
			//cout << uno << "encontrado en: " << found << endl;

			return found;

		else
			return 0;
	}
	*/
	~Almacen(){ delete[]almacen; }

};