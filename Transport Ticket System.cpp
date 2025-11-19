#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int transportation_type, travel_distance, passenger_age, travel_day, travel_hour, baggage_weight;
	char class_code, is_student, is_member;
	double base_fare = 0, surcharge = 0, discount = 0, baggage_fee = 0, total = 0;


	cout << "What is your transportation type? (1=bus, 2=train, 3=flight)\n";
	cin >> transportation_type;

	cout << "Enter travel distance:\n";
	cin >> travel_distance;

	cout << "Enter age:\n";
	cin >> passenger_age;

	cout << "Enter day of travel (1 = weekday, 2 = weekend):\n";
	cin >> travel_day;

	cout << "Enter travel hour\n";
	cin >> travel_hour;

	cout << "Enter class code (S=Sleeper, A=AC, B=Business, N=Normal:\n";
	cin >> class_code;

	cout << "Enter baggage weight (kg):\n";
	cin >> baggage_weight;

	cout << "Is the passenger a student? (Y/N):\n";
	cin >> is_student;

	cout << "Is the passenger a member? (Y/N):\n";
	cin >> is_member;


	switch (transportation_type)
	{
	case 1:
		base_fare = travel_distance * 0.5;


		if (class_code == 'S' || class_code == 's')
		{
			base_fare = base_fare * 1.2;
		}
		if (((travel_hour >= 7) || (travel_hour <= 10)) || ((travel_hour >= 17) || (travel_hour <=20)))
		{
			surcharge = base_fare * 1.15;
		}
		if (passenger_age < 12)
		{
			discount = discount + (base_fare * 0.5);
		}
		if (passenger_age >= 60)
		{
			discount = discount + (base_fare * 0.3);
		}
		if (is_student == 'Y')
		{
			if (travel_distance > 20)
			{
				discount = discount + (base_fare * 0.1);
			}
		}
		if (is_member == 'Y')
		{
			discount = discount + (base_fare * 0.05);
		}
		if (base_fare < 2)
		{
			base_fare = 2;
		}
		if (baggage_fee > 10)
		{
			baggage_fee = (baggage_fee - 10) * 1.0;
		}
		break;

	case 2: 
		base_fare = travel_distance * 0.8;


		if (class_code == 'A' || class_code == 'a')
		{
			base_fare = base_fare * 1.5;
		}
		if (((travel_hour >= 7) || (travel_hour <= 10)) || ((travel_hour >= 17) || (travel_hour <= 20)))
		{
			surcharge = base_fare * 1.15;
		}
		if (passenger_age < 12)
		{
			discount = discount + (base_fare * 0.5);
		}
		if (passenger_age >= 60)
		{
			discount = discount + (base_fare * 0.3);
		}
		if (is_student == 'Y')
		{
			if (travel_distance > 20)
			{
				discount = discount + (base_fare * 0.1);
			}
		}
		if (is_member == 'Y')
		{
			discount = discount + (base_fare * 0.05);
		}
		if (base_fare < 5)
		{
			base_fare = 5;
		}
		if (baggage_fee > 10)
		{
			baggage_fee = (baggage_fee - 10) * 1.0;
		}
		break;

	case 3:
		base_fare = travel_distance * 2.5;


		if (class_code == 'B' || class_code == 'b')
		{
			base_fare = base_fare * 2.5;
		}
		if (((travel_hour >= 7) || (travel_hour <= 10)) || ((travel_hour >= 17) || (travel_hour <= 20)))
		{
			surcharge = base_fare * 1.15;
		}
		if (travel_day == 2)
		{
			surcharge = base_fare * 1.1;
		}
		if (passenger_age < 12)
		{
			discount = discount + (base_fare * 0.5);
		}
		if (passenger_age >= 60)
		{
			discount = discount + (base_fare * 0.3);
		}
		if (is_student == 'Y')
		{
			if (travel_distance > 20)
			{
				discount = discount + (base_fare * 0.1);
			}
		}
		if (is_member == 'Y')
		{
			discount = discount + (base_fare * 0.05);
		}
		if (base_fare < 50)
		{
			base_fare = 50;
		}
		if (baggage_fee > 15)
		{
			baggage_fee = (baggage_fee - 15) * 3.0;
		}
		break;
	}

	total = base_fare + surcharge - discount + baggage_fee;

	cout << fixed << setprecision(2);
	cout << "Final ticker price: $" << total << endl;
		return 0;
}
