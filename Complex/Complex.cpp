#include "Complex.h"

Complex::Complex()
{
	real = imagine = 0;
}
Complex::Complex(double a, double b)
{
	real = a;
	imagine = b;
}
Complex::~Complex()
{
}

std::ostream& operator<<(std::ostream& os, const Complex& num)
{
	os << "(" << num.real << ", " << num.imagine << ")";
	return os;
}
std::istream& operator>>(std::istream& is, Complex& num)
{
	std::cout << "real: ";
	is >> num.real;
	std::cout << "imagine: ";
	is >> num.imagine;
	return is;
}
