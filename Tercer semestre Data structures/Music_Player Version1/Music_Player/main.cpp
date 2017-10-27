#include "DoubleLinkedList.h"
#include "Music_Player.h"
#include <iostream>
#include <string>
using namespace std;

void user_menu();

int main()
{
	std::cout << "TEST OF DOUBLE LISTS" << std::endl;
	user_menu();

	return 0;
}

void user_menu()
{
	string songs[50];
	Music_Player playlist;
	char option = 'a';
	std::string value;
	bool found;
	DoubleLinkedList<std::string> double_list;

	for (int i = 0; i < playlist.getNames(songs); i++)
	{
		double_list.insertOrdered(songs[i]);
	}

	while (option != 'q')
	{
		std::cout << "Main menu:" << std::endl;
		std::cout << "\ta. Insert item" << std::endl;
		std::cout << "\tb. Search for item" << std::endl;
		std::cout << "\tc. Print list" << std::endl;
		std::cout << "\td. Print current item" << std::endl;
		std::cout << "\tq. Quit the program" << std::endl;
		std::cout << "Select an option: ";
		std::cin >> option;

		if (option == 'a')
		{
			
		}
		else if (option == 'b')
		{
			found = false;
			std::cout << "Enter value to search for: ";
			std::cin >> value;
			found = double_list.searchFor(value);
			if (found)
			{
				std::cout << "Item found in the list" << std::endl;
			}
			else
			{
				std::cout << "No such item in the list" << std::endl;
			}
		}
		else if (option == 'c')
		{
			double_list.printList();
		}
		else if (option == 'd')
		{
			std::cout << double_list.getCurrent()->getData() << std::endl;
		}
		else if (option == 'q')
		{
			std::cout << "Good bye!" << std::endl;
		}
		else
		{
			std::cout << "Invalid option. Try again ..." << std::endl;
		}
	}
}




/*string songs[50];
Music_Player gato;
for (int i = 0; i < gato.getNames(songs); i++)
{
cout << i << " = " << names[i] << endl;
}*/