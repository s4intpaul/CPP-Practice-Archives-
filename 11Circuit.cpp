#include <iostream>
#include <complex>
#include <iomanip>
using namespace std;

int main()
{
	const complex <double> i = complex<double>(0, 1);

	double R,
		L,
		C,
		omega;
	complex<double> V,
		Z,
		I;

	cout << "\nEnter resistance (ohms), inductance (henrys),\n"
		<< "and capacitance (farads): ";
	cin >> R >> L >> C;

	cout << "\nEnter freq (radians/second): ";
	cin >> omega;
	
	cout << "\nEnter voltage as a complex number in the form (x, y): ";
	cin >> V;

	// calc resist. using comp. arithmetic. 
	Z = R + omega * L * i - i / (omega * C);

	// calc and display Current using comp. arithmetic
	I = V / Z;
	cout << fixed << setprecision(2)
		<< "\nCurrent = " << real(I) << " + " << imag(I) << "I"
		<< "\nwith magnitude = " << abs(I) << endl;
}
