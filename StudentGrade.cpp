#include <iostream>
using namespace std;


int main()
{
    int score;

    cout << "What is the students score? (Must be between 0-100)\n";
    cin >> score; 

    switch (score / 10)
    {
    case 10:
        cout << "They made an A.\n";
        break;
    case 9:
        cout << "They made an A.\n";
        break;
    case 8:
        cout << "They made a B.\n";
        break;
    case 7:
        cout << "They made a C.\n";
        break;
    case 6:
        cout << "They made a D.\n";
        break;
    default:
        cout << "They made a F.\n";
    }
    return 0;
}
