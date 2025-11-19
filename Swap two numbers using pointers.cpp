#include <iostream>
using namespace std;

int main()
{
	int num1;
	num1 = 5;

	int num2;
	num2 = 10;

	int* ptr1;
	ptr1 = &num1;

	int* ptr2;
	ptr2 = &num2;

	*ptr1 = 10;
	*ptr2 = 5;

	cout << "After swap: num1 = " << num1 << endl;
	cout << "            num2 = " << num2 << endl;

	
}

