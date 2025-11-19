#include <iostream>
using namespace std;


int sum_of_digits(int number);

int main()
{
	int user_input;
	cout << "Type in your number:";
	cin >> user_input;

	int result = sum_of_digits(user_input);

	cout << "The sum of the digits of your number is: " << result << endl;

	return 0;
}

int sum_of_digits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		int last_digit = (number % 10);
		sum += last_digit;
		number = number / 10;	
	}
	return sum;
}

