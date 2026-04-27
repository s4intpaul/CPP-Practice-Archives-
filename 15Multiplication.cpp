#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "This program constructs a multiplicaton table\n"
		"for the values 1*1 through lastX*lastY.\n\n";

	int lastX,
		lastY,
		product;

	cout << "Enter two integer limit values (lastX and lastY): ";
	cin >> lastX >> lastY;

	cout << "|";
	for (int y = 1; y <= lastY; y++)
		cout << right << setw(5) << y;
	cout << "\n---|";
	for (int y = 1; y <= lastY; y++)
		cout << "-----";
	cout << endl;

	for (int x = 1; x <= lastX; x++)
	{
		cout << setw(3) << x << "|";
		for (int y = 1; y <= lastY; y++)
		{
			product = x * y;
			cout << setw(5) << product;
		}
		cout << "\n";
		if (x < lastX) cout << " |\n";
	}
}