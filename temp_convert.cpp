/*
This is a tutorial script that converts temperature from Farenheit to Celcius and Kelvin and then tabulates values  from 0F to 300F.
*/
/*
Author: Brian Crow
Created on: 20MAY2019
Modified on: 20MAY2019
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int fahr;
	int low = 0;
	int high = 300;
	int step = 20;
	double cels;
	char message1[88]="\nThis program will make a table showing temperature in Farenheit, Celsius and Kelvin.\n";
	char message2[92]="You will input the minimum temperature in Farenheit, the maximum temperature in Farenheit,\n";
	char message3[59]="and the desired interval size in Farenheit for the table.\n";
	cout << message1 << message2 << message3;
	cout << "What value do you wish to use for minimum temperature in Farenheit?\n";
	cin >> low;
	cout << "What value do you wish to use for maximum temperature in Farenheit?\n";
	cin >> high;
	cout << "How large of an interval in Farenheit temperature would you like to display?\n";
	cin >> step;
	cout << "You chose " << low << "F for the minimum, " << high << "F for the maximum and " << step << "F for the interval.\n";
	cout << setiosflags( ios :: left );
	cout.width(15);
	cout << "Farenheit";
	cout.width(15);
	cout << "Celsius";
	cout.width(15);
	cout << "Kelvin\n\n";
	
	cout.setf(ios::fixed);
	cout.precision(2);
	for (fahr = low ; fahr <= high ; fahr += step ) {
		cout << "   ";
		cout.width(15);
		cout << fahr;
		cout.width(15);
		cels = (fahr-32)*5.0/9;
		cout << cels;
		cout.width(15);
		cout << cels+273.15 << endl;
	}

	return 0;
}
