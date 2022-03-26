// test.cpp -- testing an Complex-class
#include "complex0.h"
#include <iostream>
using namespace std;

int main()
{
	complex a(3, 4);
	complex c;
	cout << "Enter a complex number (q to quit):\n";
	while (cin >> c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjucate is " << -c << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Done!\n";

	return 0;
}