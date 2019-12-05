//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double legA, legB, hypotenuse;
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "This program will calculate the hypotenuse of a right triangle.\n";
	cout << "Please input the first leg of the triange: ";
	cin >> legA;
	
	cout << "\nNow please input the first leg of the triange: ";
	cin >> legB;
	
	hypotenuse = sqrt(pow(legA, 2) + pow(legB, 2));
	cout << "\nThe hypotenuse of your right triange is " << hypotenuse << ".";
	
	cout << endl;
	return 0;
}
