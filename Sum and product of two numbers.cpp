#include <iostream>
using namespace std;

int sum_of_numbers(int first_number, int second_number);
int product_of_two_numbers(int first_number, int second_number);

void display();

int main()
{
    int first_input, second_input;

    display();

    cout << "Enter two numbers: ";
    cin >> first_input >> second_input;

    int sum = sum_of_numbers(first_input, second_input);
    int product = product_of_two_numbers(first_input, second_input);

    cout << "The sum of both numbers are: " << sum << endl;
    cout << "The product of both numbers are: " << product << endl;

    // cout << "The sum of both numbers are: " << sum_of_numbers(first_input, second_input); << endl;
    // cout << "The product of both numbers are: " << product_of_two_numbers(first_input, second_input); << endl;

    return 0;
}

int sum_of_numbers(int first_number, int second_number)
{
    int result = first_number + second_number;
    return result;
}

int product_of_two_numbers(int first_number, int second_number)
{
    int result = first_number * second_number;
    return result;

    // return first_number * second_number;
}


void display()
{
    cout << "Welcome to my application" << endl;
}