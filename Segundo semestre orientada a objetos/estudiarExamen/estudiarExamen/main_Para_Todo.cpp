#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a[5] = { "Bran Stark", "Theon Greyjoy", "Barristan Selmy", "Catelyn Stark", "Bran Zac" };
	string *beg = &a[0]; //points to beginning of sorting region
	string *end = &a[5]; //points after end of sorting region
	sort(beg, end);
	for (int i = 0; i < 5; i++)
		cout << a[i] << endl;
	//outputs alphabetically.
}
