#include<iostream>
using namespace std;
int main()
{
	int i = 7;
	do
	{
		cout << i << endl;
		i = i + 7;

	} while (i <= 98);
	cout << "The sequence of number is: " << i << endl;
	return 0;
}