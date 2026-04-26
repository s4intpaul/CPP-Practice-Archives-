#include <iostream>
#include <iomanip>
using namespace std;

int sum(int n); 
void straightLine(double amount, int numYears);
void sumOfYears(double amount, int numYears); 

int main()
{
	cout << "This program computes depreciation tables using\n"
		<< "straight-line and sum-of-the-years'-digits methods.\n\n";

	double purchasePrice,
		salvageValue,
		amount; 
	int usefulLife;

	cout << "What is the item's purchase price? ";
	cin >> purchasePrice;
	cout << "salvageValue? ";
	cin >> salvageValue;
	cout << " Useful life? ";
	cin >> usefulLife;
	amount = purchasePrice - salvageValue;
	straightLine(amount, usefulLife);
	sumOfYears(amount, usefulLife);
}


int sum(int n)
{
	return n * (n + 1) / 2;
}

void straightLine(double amount, int numYears)
{
	double deprecation = amount / numYears;

	cout << "\nYear  - Deprecation"
		<< "\n--------------------\n";

	cout << fixed << showpoint << right
		<< setprecision(2);

	for (int year = 1; year < numYears; year++)
		cout << setw(3) << year
		<< setw(13) << deprecation << endl;

}

void sumOfYears(double amount, int numYears)
{
	cout <<"\nYear - Deprecation" 
		<< "\n--------------------\n";

	double yearSum = sum(numYears);
	double deprecation;

	cout << fixed << showpoint << right
		<< setprecision(2); 

	for (int year = 1; year <= numYears; year++)
	{
		deprecation = (numYears - year + 1) * amount / yearSum;
		cout << setw(3) << year
			<< setw(13) << deprecation << endl;
	}
}
