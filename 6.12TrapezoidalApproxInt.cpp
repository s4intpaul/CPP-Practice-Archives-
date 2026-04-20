/* This program approx. the area under the graph of a function
f() over an interval [a, b] using the trapez. rule. And this
approximates the definite integral of f() from a to b. */

#include <iostream>
using namespace std;

double f(double x); // function to be integrated

int main()
{

	cout << "Trapezoidal approximation of an integral: \n";
	int n;
	double a, b,
		deltaX,
		x, y,
		sum;

	cout << "Enter interval endpoints end the # of subintervals: ";
	cin >> a >> b >> n;

	deltaX = (b - a) / n;
	sum = 0;
	x = a;

	for (int i = 1; i <= n - 1; i++)
	{
		x += deltaX;
		y = f(x);
		sum += y;

	}
	sum = deltaX * ((f(a) + f(b)) / 2 + sum);

	cout << "Approximate value using " << n << " subintervals: "
		<< sum << endl;
}

//Function being integrated
double f(double x)
{
	return x * x + .1;
}