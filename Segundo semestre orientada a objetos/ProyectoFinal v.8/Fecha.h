class Fecha
{
private:
	int *dia;
	int *mes;
	int *anio;

public:
	void setDia(int d)
	{
		do
		{
			cin >> d;
			if (d >= 1 && d < 32)
			{
				dia = new int;
				*dia = d;
				break;
			}

			else
				cout << "Dia invalido. Introduzca otro:\n";

		} while (d != 0);
	}

	void setMes(int m)
	{
		do
		{
			cin >> m;
			if (m >= 1 && m < 13)
			{
				mes = new int;
				*mes = m;
				break;
			}

			else
				cout << "Mes invalido. Introduzca otro:\n";

		} while (m != 0);
	}

	void setAnio(int an)
	{ 
		cin >> an;
		anio = new int;
		*anio = an; 
	}

	Fecha()
	{
		int d1 = 0, m1 = 0, an1 = 0;

		cout << "Dia:";
		setDia(d1);
		cout << "Mes:";
		setMes(m1);
		cout << "Anio:";
		setAnio(an1);
	}

	Fecha(int d, int m, int an)
	{
		setDia(d);
		setMes(m);
		setAnio(an);
	}

	void imprimir()
	{
		cout << *dia << "/" << *mes << "/" << *anio << endl;
	}

	int &getDia(){ return *dia; }
	int &getMes(){ return *mes; }
	int &getAnio(){ return *anio; }
};

