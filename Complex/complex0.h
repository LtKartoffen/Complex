//#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class complex
{
private:
	double imagine;
	double real;
public:
	complex(double a, double b);
	complex();
	~complex();
	complex operator+(const complex& b) const;
	complex operator-(const complex& b) const;
	complex operator*(const complex& b) const;
	complex operator-() const;
	complex operator*(double n) const;
	friend complex operator*(double n, const complex& b);
	friend std::ostream& operator<<(std::ostream& os, const complex& num);
	friend std::istream& operator>>(std::istream& is, complex& num);
};

#endif // !COMPLEX_H_
