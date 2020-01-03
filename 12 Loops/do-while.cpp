//============================================================================
// Name        : do-while.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Do-while, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "hello";

	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input != password) {
			cout << "Access denied." << endl;
		}

	} while (input != password);


	cout << "Password accepted" << endl;

	return 0;
}
/*
OUTPUT
============================================================================
Enter your password > dcghfvuk
Access denied.
Enter your password > hjbbm
Access denied.
Enter your password > hello
Password accepted
============================================================================
*/
