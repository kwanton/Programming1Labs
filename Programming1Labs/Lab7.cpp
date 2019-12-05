//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char packageSelection;
	float hoursUsed;
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Please select an ISP package, and input your decision:\n";
	cout << "a: $9.95 a month and 10 hours of access are provided. " << 
			"Additional hours are $3.00 per hour.\n";
	cout << "b: $14.95 a month for 20 hours. " <<
			"Additional hours are $2.00 per hour.\n";
	cout << "c: $19.95 a month for unlimited access.\n";
	
	cin >> packageSelection;
	
	switch(packageSelection)
	{
		case 'a':
		{
			do
			{
				cout << "\nPlease input the amount of hours you used: ";
				cin >> hoursUsed;
			} while (hoursUsed < 0 || hoursUsed > 744);
			
			if (hoursUsed > 10)
			{
				cout << "\nYour total balance is $" << 
						9.95 + (3 * (hoursUsed - 10)) << ".";
				break;
			}else
			{
				cout << "\nYour total balance is $9.95";
				break;
			}
		}
		case 'b':
		{
			do
			{
				cout << "\nPlease input the amount of hours you used: ";
				cin >> hoursUsed;
			} while (hoursUsed < 0 || hoursUsed > 744);
			
			if (hoursUsed > 20)
			{
				cout << "\nYour total balance is $" << 
						14.95 + (2 * (hoursUsed - 20)) << ".";
				break;
			}else
			{
				cout << "\nYour total balance is $14.95";
				break;
			}
		}
		case 'c':
		{
			cout << "\nYour total balance is $19.95 for this month.";
			
			break;
		}
		default:
		{
			cout << "\nThere was an input error. Please reset the program.";
		}
	}
	
	cout << endl;
	return 0;
}
