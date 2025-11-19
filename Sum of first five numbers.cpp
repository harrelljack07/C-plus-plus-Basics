#include <iostream>
using namespace std;

int main()
{
    int sum, number;

    number = 1;
    sum = 0;

    while (number <= 5)
    {
        sum = sum + number;
        number = number + 1;

    }
    cout << sum << endl;

}
