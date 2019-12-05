//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double flourNeeded, sugarNeeded, butterNeeded;
	int cookies;
	cout << setprecision(1) << fixed << showpoint;
	
	cout << "How many cookies do you want made? ";
	cin >> cookies;
	
	if (cookies % 48)
	{
		cout << "\nI'm sorry, I can only make batches of 48.\n"
		<< "Please relaunch, and give me an amount\n"
		<< "divisible by 48";
	}
	else
	{
		flourNeeded = (cookies/48) * 2.5;
		sugarNeeded = (cookies/48) * 1.75;
		butterNeeded = cookies/48;
		cout << "\nOkay, you'll need " << flourNeeded << " cups of flour,\n"
		<< sugarNeeded << " cups of sugar, and " << butterNeeded << 
		" cup(s) of butter";
	}
	
	cout << endl;
	return 0;
}
