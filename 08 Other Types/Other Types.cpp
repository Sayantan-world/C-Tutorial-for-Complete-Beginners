//============================================================================
// Name        : Other.cpp
// Author      : Sayantan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;

	char cValue = 's';
	cout << cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = L'i';
	wcout << wValue << endl;//If u use cout instead of wcout the ascii value of the character is printed
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
/*
OUTPUT
============================================================================
1
s
Size of char: 1
i
Size of wchar_t: 4
============================================================================
*/
