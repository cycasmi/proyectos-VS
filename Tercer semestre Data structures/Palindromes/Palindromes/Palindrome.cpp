//Recursively determine if a string is a palindrome.

#include <iostream>
#include <string>
using namespace std;

//Recursive function to test a palindrome.
int palindrome(char *string, int left_limit, int right_limit)
{

	if (string[left_limit] == string[right_limit-1])
	{
		palindrome(string, left_limit + 1, right_limit - 1);
		cout << "\n" << left_limit;
		return 1;
	}

	else
		return 0;
}

int main()
{
	char string[20];
	int lenght, answer = 0;

	cout << "Enter the string to test:";
	cin >> string;

	lenght = strlen(string);

	answer = palindrome(string, 0, lenght);

	cout << "The string " << string << " is " << (answer ? "a palindrome\n" : "not a palindriome\n");

	return 0;
}