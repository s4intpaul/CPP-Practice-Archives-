/* This program calculates mile per gallon, fuel cost per mile and total cost
for a truck on a recycling pickup route. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int route;
	cout << "Enter route number : ";
	cin >> route;

	double miles,
		gallonsOfFuel,
		unitFuelCost,
		otherOperatingCost;

	cout << "Enter: \n\ttotal; miles traveled,"
		<< "\n\tgallons of fuel used,"
		<< "\n\tfuel cost per gallon, and"
		<< "\n\tother operating costs (total): "
		<< "\n\t--->";
	cin >> miles >> gallonsOfFuel
		>> unitFuelCost >> otherOperatingCost;

	double milesPerGallon = miles / gallonsOfFuel,
		fuelCost = unitFuelCost * gallonsOfFuel,
		totalTripCost = fuelCost + otherOperatingCost,
		costPerMile = totalTripCost / miles;

	cout << showpoint << fixed << setprecision(2)
		<< "For Route  #" << route << ":\n"
		<< "\n\tMiles per gallon: " << setw(8) << milesPerGallon
		<< "\n\tTotal cost:      $" << setw(8) << totalTripCost
		<< "\n\tCost per mile:   $" << setw(8) << costPerMile
		<< endl;


}