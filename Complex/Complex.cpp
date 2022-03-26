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

//operators
Complex Complex::operator+(const Complex& b) const
{
	return Complex(real + b.real, imagine + b.imagine);
}
Complex Complex::operator-(const Complex& b) const
{
	return Complex(real - b.real, imagine - b.imagine);
}
Complex Complex::operator-() const
{
	return Complex(real, -imagine);
}
Complex Complex::operator*(double n) const
{
	return Complex(n * real, n * imagine);
}
Complex operator*(double n, const Complex& b)
{
	return b * n;
}
Complex Complex::operator*(const Complex& b) const
{
	return Complex(real * b.real - imagine * b.imagine, real * b.imagine + imagine * b.real);
}