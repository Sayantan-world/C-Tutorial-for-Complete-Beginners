//============================================================================
// Name        : If.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";
	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	if(input == password) {
		cout << "Password accepted." << endl;
	}

	else {
		cout << "Access denied." << endl;
	}

	return 0;
}
/*
OUTPUT
============================================================================
Enter your password > hello
Password accepted.
============================================================================
*/
