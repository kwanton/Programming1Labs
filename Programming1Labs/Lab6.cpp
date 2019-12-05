//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
using namespace std;

int main()
{
	double side1, side2, side3;
	
	cout << "Please give me the lengths of three sides of a triangle, " <<
			"and I will tell you if this triange can exist in our world.\n";
	
	cout << "\nWhat is the length of the first side? ";
	cin >> side1;
	
	cout << "\nWhat is the length of the second side? ";
	cin >> side2;
	
	cout << "\nWhat is the length of the third side? ";
	cin >> side3;
	
	if(side1 > 0 && side2 > 0 && side3 > 0)
	{
		if (side1 + side2 < side3 || side2 + side3 < side1 
			|| side1 + side3 < side2)
		{
			cout << "\nUh oh, you broke the laws of reality. That triangle " << 
					"can't exist silly. \nPlease relaunch this program and " <<
					"try again.";
		} else
		{
			cout << "\nThis triange can exist within our laws of reality!\n" <<
					"Good work!";
		}
	}
	else
	{
		cout << "\nA negative triange can't exist silly. \nPlease relaunch " <<
				"this program and try again.";
	}
	cout << endl;
	return 0;
}
