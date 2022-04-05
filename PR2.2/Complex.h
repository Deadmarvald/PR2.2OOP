#pragma once

#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();

	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }
	double GetX() const { return x; }
	double GetY() const { return y; }

	Complex& operator = (const Complex&);
	operator string() const;

	friend Complex operator +(const Complex&, const Complex&);
	friend Complex operator -(const Complex&, const Complex&);
	friend Complex operator *(const Complex&, const Complex&);
	friend Complex operator /(const Complex&, const Complex&);

	Complex& operator +=(const Complex&);
	Complex& operator -=(const Complex&);
	Complex& operator *=(const Complex&);
	Complex& operator /=(const Complex&);

	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

	Complex& operator ++();
	Complex& operator --();
	Complex operator ++(int);
	Complex operator --(int);
};