#include <iostream>
using namespace std;


int square_number(int number);

int main()
{
	int user_input;
	cout << "Enter a number: \n";
	cin >> user_input; 

	int squared_value = square_number(user_input);

	cout << "The square of " << user_input << " is: " << squared_value << endl;

	return 0;
}

int square_number(int number)
{
	int result = number * number;
	return result;
}



