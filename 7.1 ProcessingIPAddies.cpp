/* This program finds the four network/host information 
blocks in an IP address. */

#include <iostream>
#include <string>
#include <cassert>
using namespace std; 

int main()
{
	string address, block1, block2, block3, block4;

	cout << "Enter an IP address: ";
	cin >> address;

	// Search address to find first period -- start at position 0 
	
	int dot1 = address.find (".", 0);
	assert(dot1 != string::npos);

	block1 = address.substr(0, dot1);

	int dot2 = address.find(".", dot1 + 1);
	assert(dot2 != string::npos);

	block2 = address.substr(dot1 + 1, dot2 - dot1 - 1);

	int dot3 = address.find(".", dot2 + 1);
	assert(dot3 != string::npos);

	block3 = address.substr(dot2 + 1, dot3 - dot2 - 1);

	assert(address.find(".", dot3 + 1) == string::npos);

	block4 = address.substr(dot3 + 1, address.size() - dot3 - 1);

	cout << "The network/host blocks are:\n"
		<< block1 << endl << block2 << endl
		<< block3 << endl << block4 << endl;
}
