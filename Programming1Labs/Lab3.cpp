//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double presentValue;
	
	cout << setprecision(2) << fixed << showpoint;
	
	presentValue = 500 / pow((1 + 0.06), 10);
	cout << "In ten years, grandpa will give me $500,\nbut according to inflation rates, that's around $"
	<< presentValue << " in todays money.";
	
	cout << endl;
	return 0;
}
