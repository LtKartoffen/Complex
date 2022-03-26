#include "complex0.h"

complex::complex()
{
	real = imagine = 0;
}
complex::complex(double a, double b)
{
	real = a;
	imagine = b;
}
complex::~complex()
{
}

std::ostream& operator<<(std::ostream& os, const complex& num)
{
	os << "(" << num.real << ", " << num.imagine << ")";
	return os;
}
std::istream& operator>>(std::istream& is, complex& num)
{
	std::cout << "real: ";
	is >> num.real;
	std::cout << "imagine: ";
	is >> num.imagine;
	return is;
}

//operators
complex complex::operator+(const complex& b) const
{
	return complex(real + b.real, imagine + b.imagine);
}
complex complex::operator-(const complex& b) const
{
	return complex(real - b.real, imagine - b.imagine);
}
complex complex::operator-() const
{
	return complex(real, -imagine);
}
complex complex::operator*(double n) const
{
	return complex(n * real, n * imagine);
}
complex operator*(double n, const complex& b)
{
	return b * n;
}
complex complex::operator*(const complex& b) const
{
	return complex(real * b.real - imagine * b.imagine, real * b.imagine + imagine * b.real);
}