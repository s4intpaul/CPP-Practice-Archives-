/* Program finds an approx. solution of the equation f(x) = 0 in
a given interval, using the bisection method. */

#include <iostream>
using namespace std;

double f(double x);

int main()
{
	cout << "\nThis program uses the bisection method to find an\n"
		<< "approximate solution to the equation f(x) = 0.\n";

	double desiredAccuracy;

	cout << "\nEnter the accuracy desired (e.g .001): ";
	cin >> desiredAccuracy;

	double left, right;

	do
	{
		cout << "Enter endpoints of an interval containing a solution: ";
		cin >> left >> right;
	}

	while (f(left) * f(right) >= 0.0);

	double width = right - left,
		midPt,
		fMid;		// the value of f at midpoint 
	
	while (width / 2.0 > desiredAccuracy)
	{
		midPt = (left + right) / 2.0;
		fMid = f(midPt);

		if (f(left) * fMid < 0.0)
			right = midPt;
		else
			left = midPt;

		width /= 2.0;		// split the interval
	}

	cout << "\n-->" << midPt << " is an approximate solution of "
		<< " f(x) = 0, to within " << desiredAccuracy << endl;
}

	// function for which a root is being found
double f(double x)

{
	return x * x * x + x - 5;
}