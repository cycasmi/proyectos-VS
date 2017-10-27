#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
	int data[] = { 15, 7, 9, 20, 37, 3, 10, 17, 22 };
	int size = sizeof data / sizeof data[0];
	BinaryTree num_tree;

	for (int i = 0; i < size; i++)
	{
		num_tree.insertNode(data[i]);
	}
	std::cout << "In order:" << std::endl;
	num_tree.printInorder();
	std::cout << "Breadth first:" << std::endl;
	num_tree.printBreadthFirst();

	int item = 7;
	if (num_tree.search(item))
		std::cout << "Found " << item << " in the tree" << std::endl;
	else
		std::cout << item << " is not in the tree" << std::endl;
	item = 30;
	if (num_tree.search(item))
		std::cout << "Found " << item << " in the tree" << std::endl;
	else
		std::cout << item << " is not in the tree" << std::endl;

	std::cout << "Deleting 8:" << std::endl;
	num_tree.remove(8);
	num_tree.printInorder();
	std::cout << "Deleting 15:" << std::endl;
	num_tree.remove(15);
	num_tree.printInorder();

	return 0;
}

/*int value = 0;
BinaryTree num_tree;

while (value != 10){
cin >> value;
num_tree.insertNode(value);
}

num_tree.printInorder();*/