/* This is a driver program to test
function sum() */

#include <iostream>
using namespace std;

int sum(int n);

int main()
{
	cout << "This program computes the sum 1 + 2 + ... + n.\n";
	cout << "Enter a value for n: ";
	int n;
	cin >> n;
	cout << "--> 1 + ... + " << n << " = " << sum(n) << endl;

}

int sum(int n)
{
	int runningTotal = 0;
	for (int count = 1; count <= n; count++)
		runningTotal += count;
	return runningTotal;
}