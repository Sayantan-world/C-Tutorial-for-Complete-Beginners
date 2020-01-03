//============================================================================
// Name        : Integer.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	cout << "CHAR_MIN : " << CHAR_MIN << endl;
	cout << "CHAR_MAX : " << CHAR_MAX << endl;
	cout << "SHRT_MIN : " << SHRT_MIN << endl;
	cout << "SHRT_MAX : " << SHRT_MAX << endl;
	cout << "USHRT_MAX : " << USHRT_MAX << endl;
	cout << "INT_MIN : " << INT_MIN << endl;
	cout << "INT_MAX : " << INT_MAX << endl;
	cout << "UINT_MAX : " << UINT_MAX << endl;
	cout << "LONG_MIN : " << LONG_MIN << endl;
	cout << "LONG_MAX : " << LONG_MAX << endl;
	cout << "ULONG_MAX : " << ULONG_MAX << endl;
	cout << "LLONG_MIN : " << LLONG_MIN << endl;
	cout << "LLONG_MAX : " << LLONG_MAX << endl;
	cout << "ULLONG_MAX : " << ULLONG_MAX << endl;
	return 0;
}

/*
OUTPUTT
============================================================================
CHAR_MIN : -128
CHAR_MAX : 127
SHRT_MIN : -32768
SHRT_MAX : 32767
USHRT_MAX : 65535
INT_MIN : -2147483648
INT_MAX : 2147483647
UINT_MAX : 4294967295
LONG_MIN : -9223372036854775808
LONG_MAX : 9223372036854775807
ULONG_MAX : 18446744073709551615
LLONG_MIN : -9223372036854775808
LLONG_MAX : 9223372036854775807
ULLONG_MAX : 18446744073709551615
============================================================================
*/
