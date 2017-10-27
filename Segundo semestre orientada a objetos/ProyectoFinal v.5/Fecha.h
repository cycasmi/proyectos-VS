class Fecha
{
private:
	int *dia;
	int *mes;
	int *anio;

public:
	void setDia(int d)
	{
		if (d >= 1 && d < 32)
		{
			dia = new int;
			*dia = d;
		}

		else
			cout << "Dia invalido \n";
	}
	void setMes(int m)
	{
		if (m >= 1 && m < 13)
		{
			mes = new int;
			*mes = m;
		}
		else
			cout << "Mes invalido \n";
	}
	void setAnio(int an)
	{ 
		anio = new int;
		*anio = an; 
	}

	Fecha()
	{
		int d1, m1, an1;

		cout << "Dia:";
		cin >> d1;
		setDia(d1);
		cout << "Mes:";
		cin >> m1;
		setMes(m1);
		cout << "Anio:";
		cin >> an1;
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

