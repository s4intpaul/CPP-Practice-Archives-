/* This program computes the amount of a radioactive substance 
remaining after an initial amount decays for some time period.
Page 42 */

#include <iostream> // cin, cout, <<, >>
#include <string> // string
#include <cmath> // pow
using namespace std;

int main()
{
	cout << "Enter the name of your radioactive substance: ";
	string element;
	cin >> element;
	cout << "and it's Half-Life (days): ";
	double halfLife;
	cin >> halfLife;
	cout << "Enter the initial amount (mg) and period of days: "; 
	double initialAmount, time;
	cin >> initialAmount >> time;

	double amountRemaining = initialAmount * pow(0.5, time / halfLife);

	cout << " \nFor " << element
		<< " with half-life " << halfLife << " days\n"
		<< initialAmount << " mg" << " will be reduced to "
		<< amountRemaining << " mg after " << time << " days\n";
}