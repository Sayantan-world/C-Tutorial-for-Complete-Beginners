//============================================================================
// Name        : Floating.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float a = 5.85123456789;

	cout << "Size of float : " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << a <<endl;
	cout << setprecision(20) << scientific << a <<endl;

	double b = 5.85123456789;

	cout << "Size of double : " << sizeof(double) << endl;
	cout << setprecision(20) << fixed << b <<endl;
	cout << setprecision(20) << scientific << b <<endl;

	long double c = 5.85123456789;

	cout << "Size of long double : " << sizeof(long double) << endl;
	cout << setprecision(20) << fixed << c <<endl;
	cout << setprecision(20) << scientific << c <<endl;

	return 0;
}

/*
OUTPUT
============================================================================
Size of float : 4
5.85123443603515625000
5.85123443603515625000e+00
Size of double : 8
5.85123456788999973810
5.85123456788999973810e+00
Size of long double : 16
5.85123456788999973810
5.85123456788999973810e+00
============================================================================
*/
