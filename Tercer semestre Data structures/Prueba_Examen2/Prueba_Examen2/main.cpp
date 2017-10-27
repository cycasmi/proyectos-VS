#include <iostream>
#include "BinaryTree.h"
#include <string>

int main()
{
	int data[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
	int size = sizeof data / sizeof data[0];
	BinaryTree<int> num_tree;

	for (int i = 0; i < size; i++)
	{
		num_tree.insertNode(data[i]);
	}

	int item = 6;
	if (num_tree.search(item))
		std::cout << "Found " << item;
	else
		std::cout << "Not found";

	num_tree.insertNode(item);
	num_tree.printInorder();
	std::cout << "Deleting item";
	num_tree.remove(item);
	num_tree.printInorder();
	std::cout << num_tree.findHeight();

	return 0;
}