//============================================================================
// Name        : While.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 0;

	while(i < 5) {
		cout << "Hello " << i << endl;

		i++; // Increments i by 1
	}

	cout << "Quitting....." << endl;

	return 0;
}
/*
OUTPUT
============================================================================
Hello 0
Hello 1
Hello 2
Hello 3
Hello 4
Quitting.....
============================================================================
*/
