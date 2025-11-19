#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	double power, square_root;

	cout << "Enter your number: ";
	cin >> number;
	square_root = sqrt(number);	
	power = pow(number, 2);
	cout << "The square of " << number << " is " << power << endl;
	cout << "The square root of " << number << " is " << square_root << endl;
}