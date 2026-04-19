/* Program to compute amount to be returned for purchase */

#include <iostream>
#include <iomanip>
using namespace std;

void printAsMoney(double dollars);

int main()
{
	double purchase,
		payment;

	cout << "Enter amount of purchase: ";
	cin >> purchase;
	cout << "Enter amount paid (>= purchase): ";
	cin >> payment;
	if (payment >= purchase)
	{
		cout << "Amount to return is: ";
		printAsMoney(payment - purchase);
		cout << endl;
	}
	else
		cout << "Inadequate payment!";
	cout << endl;
}

/* printAsMoney displays an amount in monetary format */

void printAsMoney(double dollars)
{
	cout << fixed << showpoint
		<< setprecision(2)
		<< '$' << dollars;
}