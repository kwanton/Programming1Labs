//Blake Blakeslee MW
//Lab8
//This program will calculate the profit and sales using different ad budgets

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setprecision(2) << fixed << showpoint;
	
	double adCost = 2000;
	int sales = 200;
	double profit = 0;
	double prevProfit = 0;
	double revenue;
	int row = 1;
	
	cout << setw(10) << "Ad Cost";
	cout << setw(10) << "Sales";
	cout << setw(10) << "Profit";
	
	while (prevProfit <= profit) {
		prevProfit = profit;
		sales = 200;
		
		sales += ((row - 1) * 0.2) * sales;
		revenue = sales * 300;
		profit = revenue - (1000 + adCost);
		
		cout << endl;
		cout << setw(4) << "$" << adCost;
		cout << setw(8) << sales;
		cout << setw(5) << "$" << profit;
		
		adCost *= 2;
		row++;
	}
	
	cout << endl;
	return 0;
}
