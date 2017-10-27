/*
Compile with:
g++ Test_Tree.cpp -o test -lsfml-graphics -lsfml-window -lsfml-system -std=c++11 -g
*/

#include <iostream>
#include "GraphicAVLTree.h"

void main_menu()
{
	GraphicAVLTree<int> num_tree;
	int num;

	char ans = 'a';
	while (ans != 'q')
	{
		if (!system("cls")){} else system("clear");

		std::cout << "\n	   Graphical AVL Tree\n" << std::endl;
		std::cout << "\ta. Add new leaf (number):" << std::endl;
		std::cout << "\tr. Remove a leaf:" << std::endl;
		std::cout << "\ts. Search for a number:" << std::endl;
		std::cout << "\tf. Fill tree with default numbers:" << std::endl;
		std::cout << "\tc. Clear tree:" << std::endl;
		std::cout << "\tb. Build the tree:" << std::endl;
		std::cout << "\tq. Exit program:" << std::endl;
		std::cout << "Select an option: ";
		std::cin >> ans;

		if (ans == 'a')
		{
			std::cout << "\nEnter the number to add: ";
			std::cin >> num;
			num_tree.insertNode(num);
		}
		else if (ans == 'r')
		{
			std::cout << "\nEnter the number to remove: ";
			std::cin >> num;
			num_tree.remove(num);
		}
		else if (ans == 's')
		{
			std::cout << "\nEnter the number your looking for: ";
			std::cin >> num;
			if (num_tree.search(num))
				std::cout << "Found " << num << " in the tree" << std::endl;
			else
				std::cout << num << " is not in the tree" << std::endl;
		}
		else if (ans == 'f')
		{
			int data[] = { 10, 20, 30, 40, 50, 60, 70};
			int size = sizeof data / sizeof data[0];
			for (int i = 0; i < size; i++)
			{
				num_tree.insertNode(data[i]);
			}
		}
		else if (ans == 'c')
		{
			num_tree.clear();
		}
		else if (ans == 'i')
		{
			num_tree.printInorder();
		}

		else if (ans == 't')
		{
			num_tree.printTree();
		}
		else if (ans == 'b')
		{
			num_tree.printGraphical();
		}
		else if (ans == 'q')
		{
			std::cout << "Good bye!" << std::endl;
		}
		else
		{
			std::cout << "Incorrect option. Try again ..." << std::endl;
		}
	}
}

int main()
{
	main_menu();
	return 0;
}