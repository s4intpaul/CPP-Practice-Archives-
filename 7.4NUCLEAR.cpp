#include <iostream>
#include <string>
using namespace std;

string engrProgram(char progCode);

int main()
{
	char code; 
	cout << "Enter the code of an Engineering Program: ";
	cin >> code;
	cout << engrProgram(code) << endl;

}

string engrProgram(char progCode)
{
	switch (progCode)
	{
	case 'C': return "Civil";
	case 'E': return "Electrical";
	case 'I': return "Industrial";
	case 'M': return "Mechanical";
	case 'U': return "Undecided";
	default: cerr << "*** code error: " << progCode << "*** \n";
		return"";
	}
}