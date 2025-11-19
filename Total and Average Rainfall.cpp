#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int daily_rainfall;
	float average_rain = 0;
	float total_rain = 0;
	

	cout << "Enter the rainfall in milimeters for 7 days!\n";

	

	for (int day = 1; day <= 7; day++)
	{
		cout << "\nEnter rainfall for day " << day << ": ";
		cin >> daily_rainfall;

		total_rain += daily_rainfall;
		
	}

	average_rain = total_rain / 7;

	cout << "Total rainfall is " << total_rain << " mm\n";
	cout << "\nAverage rainfall is " << setprecision(4) << average_rain << " mm\n";

	return 0;





}
