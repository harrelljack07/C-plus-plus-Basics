#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;

	do
	{
		cout << "Enter a number! (0 to stop)\n";
		cin >> num;
		sum = sum + num;
	} while (num != 0);


	cout << sum;
	return 0;
}

