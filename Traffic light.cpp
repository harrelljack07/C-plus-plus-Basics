#include <iostream>
using namespace std;

int main()
{
    string color;
    int car;
    bool emergency;


    cout << "What color is the light?" << endl;
    cin >> color;
    
 


    if (color == "green")
    {
        cout << " Go!" << endl;
    }
    else if (color == "yellow")
    {
        cout << "How fast is the car going?" << endl;
        cin >> car;
        if (car > 40)
        {
            cout << "Stop immeiately!" << endl;
        }
        else
        {
            cout << "Proceed with caution." << endl;
        }
    }
    else if (color == "red")
    {
        cout << "Do you have an Emergency vehicle? 1 if yes, 0 if no." << endl;
        cin >> emergency;

        if (emergency == true)
        {
            cout << "Allow emergency vehicle." << endl;
        }
        else
        {
            cout << "Stop!" << endl;
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}

