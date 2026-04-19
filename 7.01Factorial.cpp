#include <iostream>
using namespace std;

unsigned factorial(unsigned n);

int main()
{
	unsigned number;

	cout << "Enter a  nonnegative integer: ";
	cin >> number;
	cout << number << "! = " << factorial(number) << endl;
}

/* Factorial computes the factorial of a non-negative integer */

unsigned factorial(unsigned n)
{
	unsigned nfact = 1;
	for (unsigned i = 1; i <= n; i++)
		nfact *= i;

	return nfact;
}