#include <iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (letter >= 'a' && letter <= 'z')
    {
        switch (letter)
        {
            case('a'):
                cout << "\nVowel";
                break;
            case('e'):
                cout << "\nVowel";
                break;
            case('i'):
                cout << "\nVowel";
                break;
            case('o'):
                cout << "\nVowel";
                break;
            case('u'):
                cout << "\nVowel";
                break;
            default: 
                cout << "\nConsonant";


        }
    }
    else
    {
        cout << "Invalid entry (not a letter)\n";
    }
}

