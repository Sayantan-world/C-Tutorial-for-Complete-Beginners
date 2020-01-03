//============================================================================
// Name        : Comparing.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Comparing floats in C++, Ansi-style
//============================================================================

/*
 * Note : you can't compare floats in c++
 * You need to compare the difference if u need to check if its nearly equal or not*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value1 = 1.1;

	if (value1 == 1.1) {
		cout << "equals" << endl;
	} else {
		cout << "not equal" << endl;
		cout << setprecision(10) << value1 << " is not same as 1.1" << endl;
	}

	return 0;
}
/*
OUTPUT
============================================================================
not equal
1.100000024 is not same as 1.1
============================================================================
*/
