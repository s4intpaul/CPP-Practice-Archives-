/* This program computes energy from a given mass using Einsteins
mass to energy conversion equation */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double SPEED_OF_LIGHT = 2997925e8; // meters/s

	double mass;
	cout << "To find the amount of energy obtained from a given mass, \n"
		"enter a mass (kg): ";
	cin >> mass;

	//compute energy
	double energy = mass * pow(SPEED_OF_LIGHT, 2);

	//display energy

	cout << mass << " kilograms of matter will release\n"
		<< energy << "kilojoules of energy. \n";
}