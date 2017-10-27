#include <iostream>
#include <string>
using namespace std;


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//NO FUNCIONA
/*
bool tc(char* frase);
int main()
{
	char frase[50];

	cout << "Inserte la oración en la cual buscar:\n";
	cin.getline(frase, 50);

	if (tc(frase))
		cout << "TRUE";
	else
		cout << "FALSE";

}

bool tc(char* frase)
{
	char palabra[] = "computación";
	int i = 0;
	int frase_lenght = char_traits<char>::length(frase);
	int palabra_lenght = char_traits<char>::length(palabra);

	if (frase_lenght >= palabra_lenght)
	{
		while (i != frase_lenght)
		{
			if (frase[i] == palabra[0])
			{
				int a = 0;
				while ((a <= palabra_lenght) && (frase[i + a] == palabra[a]))
				{
					if (a == palabra_lenght){
						return true;
						break;
					}
					a++;
				}
			}
			i++;
		}
	}
	else
		return false;

}*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*bool tc(string frase);

int main()
{
	string frase;
	cout << "Inserte frase:";
	getline(cin, frase);
	if (tc(frase))
		cout << "TRUE";
	else
		cout << "FALSE";

	return 0;
}

bool tc(string frase)
{
	size_t found = frase.find("computacion");
	if (found != string::npos)
		return true;
	else
		return false;
}*/
