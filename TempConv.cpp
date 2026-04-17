#include <iostream>
using namespace std;

int main()
{
	cout << "Enter temp in Celsius: ";

	//Input a real value from cin and store in celsius
	double celsius;
	cin >> celsius;

	// Compute Fahr. 
	double fahrenheit = 1.8 * celsius + 32;

	//Output

	cout << celsius << " degrees Celcius is equivalent to "
		<< fahrenheit << " degrees Fahrenheit.\n";

}