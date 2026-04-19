#include <iostream>
using namespace std;

double windChill(double tempFahr, double windSpread);

int main()
{
	double temp,
	wind;

	cout << "Enter Fahr. temp and wind speed (mph): ";
	cin >> temp >> wind;
	cout << "Wind chill index is " << windChill(temp, wind) << endl;
}

#include <cmath>
using namespace std;

double windChill(double tempFahr, double windSpeed)
{
	double multiplier = -35.75 + 0.4275 * tempFahr;
	return 35.74 + 0.6215 * tempFahr + multiplier * pow(windSpeed, 0.16);

}