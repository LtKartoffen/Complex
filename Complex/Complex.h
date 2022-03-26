//#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class Complex
{
private:
	double imagine;
	double real;
private:
	Complex(double a, double b);
	Complex();
	~Complex();
	Complex operator+(const Complex& b) const;
	Complex operator-(const Complex& b) const;
	Complex operator*(const Complex& b) const;
	Complex operator-() const;
	Complex operator*(double n) const;
	friend Complex operator*(double n, const Complex& b);
	friend std::ostream& operator<<(std::ostream& os, const Complex& num);
	friend std::istream& operator>>(std::istream& is, Complex& num);
};

#endif // !COMPLEX_H_
