//============================================================================
// Name        : If-else-if.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding new record..." << endl;
	} else if (value == 2) {
		cout << "Deleting record..." << endl;
	} else if (value == 3) {
		cout << "Viewing..." << endl;
	} else if (value == 4) {
		cout << "Searching ..." << endl;
	} else if (value == 5) {
		cout << "Quitting ..." << endl;
	}
	else {
		cout << "Invalid option." << endl;
	}



	return 0;
}
/*
OUTPUT
============================================================================
1.	Add new record.
2.	Delete record.
3.	View record.
4.	Search record.
5.	Quit.
Enter your selection > 5
Quitting ...
============================================================================
*/
