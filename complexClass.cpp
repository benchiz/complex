#include <iostream>
#include "class.h"

using namespace std;

void print(Complex number)
{
	cout << "Number " << "Re: " << number.re << endl;
	cout << "Number " << "Im: " << number.im << endl;
	cout << endl;
}

void classComplex()
{
	Complex a;
	a.input(5, 4);
	cout << "a:" << endl;
	print(a);

	Complex b;
	b.input(6, 2);
	cout << "b:" << endl;
	print(b);

	Complex a1;
	a1.sequence(a);
	cout << "a after sequence: " << endl;
	print(a1);

	Complex c;
	c.input(2, 2);
	cout << "c:" << endl;
	print(c);

	c.multiple(c);
	cout << "c after multiple: " << endl;
	print(c);

	Complex d;

	d.result(a, a1, b, c);

	cout << "d = " << d.re << " + " << d.im << "i";
}