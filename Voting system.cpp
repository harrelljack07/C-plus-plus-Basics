#include <iostream>
using namespace std;


int main()
{
	int age;
	bool citizenship;

	cout << "Enter your age:" << endl;
	cin >> age;

	if (age >= 18)
	{
		cout << "Are you a citizen? 1 for yes, 0 for no." << endl;
		cin >> citizenship;

		if (citizenship)
			{
				cout << "You are eligible to vote!" << endl;
		}
		else
			{
				cout << "You must be a citizen to vote." << endl;
			}
	}
	else
	{
		cout << "You must be 18 years or older to vote." << endl;
	}

	return 0;
}
