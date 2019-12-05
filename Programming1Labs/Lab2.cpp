//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double interest, finalBalance;
	
	cout << setprecision(2) << fixed << showpoint;
	
	interest = 580 * 0.025;
	cout << "The interest earned from the balance is $" << interest << endl;
	
	finalBalance = 580 + interest;
	cout << "The final balance is $" << finalBalance;
	
	cout << endl;
	return 0;
}
