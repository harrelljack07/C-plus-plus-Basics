#include <iostream>
using namespace std;

int main()
{
    int marks, exam_score;
    string sports_quota;


    cout << "What are your marks?" << endl;
    cin >> marks;
    cout << "What is your exam score?" << endl;
    cin >> exam_score;
    cout << "Do you have a sports quota?" << endl;
    cin >> sports_quota;



    if (marks >= 60)
    {
        
        if (marks >= 85 && exam_score >= 80)
        {
            cout << "Admission in honors program!" << endl;
        }
        else if ((marks >= 70 && exam_score >= 60) && sports_quota == "no")
        {
            cout << "Admission in regular room." << endl;
        }
        else if ((marks >= 60) && sports_quota == "yes")
        {
            cout << "Admission under sports quota." << endl;
        }

    }
    else
    {
        cout << "Application rejected." << endl;
    }
    return 0;
}

