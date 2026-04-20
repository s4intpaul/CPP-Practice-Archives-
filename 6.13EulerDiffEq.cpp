#include <iostream>
#include <iomanip>
using namespace std;

double f(double x, double y);

int main()
{
	cout << "Euler's method ofr solving a  differential equation: \n";

	double x, y,
		xNext, yNext,
		deltaX;
	int numIterations;

	cout << "Enter x0 and y0, x-increment to use, and "
		<< "number of values to calculate: \n";
	cin >> x >> y >> deltaX >> numIterations;

	cout << " X				Y\n"
		<< "================\n"
		<< fixed << setprecision(5) << showpoint
		<< setw(10) << x << setw(10) << y << endl;

	//Iterate with Euler method

	for (int n = 1; n <= numIterations; n++)
	{
		xNext = x + deltaX;
		y = y + f(x, y) * deltaX;
		x = xNext;
		cout << setw(10) << x << setw(10) << y << endl;
	}

}
double f(double x, double y)
{
	return 2.0 * x * y; 
}