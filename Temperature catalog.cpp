#include <iostream>
using namespace std;

int main()
{
	int readings_count;

	cout << "What is the temperature? \n";
	cin >> readings_count;


	if (readings_count < 15)
	{
		cout << "Cold\n";
	}
	else if (15 <= readings_count && readings_count <= 29)
	{
		cout << "Warm\n";
	}
	else
	{
		cout << "Hot\n";
	}

	return 0;
}
