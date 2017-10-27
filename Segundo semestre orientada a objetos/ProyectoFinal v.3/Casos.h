void casoMenuYogurCli(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

}

void casoMenuQuesoCli(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

	if (ele == 'c')
	{

	}
}

void casoMenuLecheCli(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

	if (ele == 'c')
	{

	}
}

void casoMenuCategoriasCli(char ele)
{
	if (ele == 'a')
	{
		menuLecheCli();
		cin >> ele;
		casoMenuLecheCli(ele);

	}

	if (ele == 'b')
	{
		menuQuesoCli();
		cin >> ele;
		casoMenuQuesoCli(ele);
	}

	if (ele == 'c')
	{
		menuYogurCli();
		cin >> ele;
		casoMenuYogurCli(ele);
	}
}

void casoMenuCliente(char ele)
{
	if (ele == 'a')
	{
		menuCategoriasCli();
		cin >> ele;
	}

	if (ele == 'b')
	{

	}

	if (ele == 'c')
	{

	}
}

void casoMenuYogurAdm(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

}

void casoMenuQuesoAdm(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

	if (ele == 'c')
	{

	}
}

void casoMenuLecheAdm(char ele)
{
	if (ele == 'a')
	{

	}

	if (ele == 'b')
	{

	}

	if (ele == 'c')
	{

	}
}

void casoMenuCategoriasAdm(char ele)
{
	if (ele == 'a')
	{
		menuLecheAdm();
		cin >> ele;
		casoMenuLecheAdm(ele);

	}

	if (ele == 'b')
	{
		menuQuesoAdm();
		cin >> ele;
		casoMenuQuesoAdm(ele);
	}

	if (ele == 'c')
	{
		menuYogurAdm();
		cin >> ele;
		casoMenuYogurAdm(ele);
	}
}

void casoMenuAdministrador(char ele)
{
	if (ele == 'a')
	{
		menuCategoriasAdm();
		cin >> ele;

	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

	if (ele == 'c')
	{
		cout << "Perfecto!";
	}
}

void casoMenuOriginal(char ele)
{
	if (ele == 'a')
	{
		menuAdministrador();
		cin >> ele;
		casoMenuAdministrador(ele);
	}

	if (ele == 'b')
	{
		menuCliente();
		cin >> ele;
		casoMenuCliente(ele);
	}
}

