// This program solves quadratic equations using the quad formula.

#include <iostream> 
#include <complex>
using namespace std;

int main()
{
	complex<double> a, b, c;
	cout << "Enter the coefficients of a quadratic equation: ";
	cin >> a >> b >> c;

	complex<double> discriminant = b * b - 4.0 * a * c,
		root1, root2;
	root1 = (-b + sqrt(discriminant)) / (2.0 * a);
	root2 = (-b - sqrt(discriminant)) / (2.0 * a);
	cout << "Root are " << root1 << " and " << root2 << endl;
}