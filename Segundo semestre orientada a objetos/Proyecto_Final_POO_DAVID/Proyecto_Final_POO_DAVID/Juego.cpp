#include "Juego.h"

void Juego::rellenar()
{
	srand(time(NULL));
	int x, y;

	for (int j = 0; j<10; j++)
	{
		for (int i = 0; i<10; i++)
		{
			mapa[i][j] = '*';
		}
	}


	num_lobos = 2;
	for (int dec_lobos = num_lobos; dec_lobos > 0; dec_lobos--)
	{
		y = rand() % 10;
		x = rand() % 10;
		if (mapa[x][y] == '*')
		{
			mapa[x][y] = 'L';
		}
		else
		{
			dec_lobos++;
			+
		}
	}

	num_obejas = 3;
	for (int dec_obejas = num_obejas; dec_obejas > 0; dec_obejas--)
	{
		y = rand() % 10;
		x = rand() % 10;
		if (mapa[x][y] == '*')
		{
			mapa[x][y] = 'O';
		}
		else
		{
			dec_obejas++;
		}
	}

	num_rocas = 1;
	for (int dec_rocas = num_rocas; dec_rocas > 0; dec_rocas--)
	{
		y = rand() % 10;
		x = rand() % 10;
		if (mapa[x][y] == '*')
		{
			mapa[x][y] = 'R';
		}
		else
		{
			dec_rocas++;
		}
	}

	num_arbustos = 1;
	for (int dec_arbustos = num_arbustos; dec_arbustos > 0; dec_arbustos--)
	{
		y = rand() % 10;
		x = rand() % 10;
		if (mapa[x][y] == '*')
		{
			mapa[x][y] = 'A';
		}
		else
		{
			dec_arbustos++;
		}
	}

	num_humanos = 1;
	for (int dec_humanos = num_humanos; dec_humanos > 0; dec_humanos--)
	{
		y = rand() % 10;
		x = rand() % 10;
		if (mapa[x][y] == '*')
		{
			mapa[x][y] = 'H';
		}
		else
		{
			dec_humanos++;
		}
	}

	for (int j = 0; j<10; j++)
	{
		for (int i = 0; i<10; i++)
		{
			cout << mapa[i][j] << ' ';
		}
		cout << endl;

	}

}


