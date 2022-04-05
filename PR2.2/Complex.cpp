#include "Complex.h"
#include <iostream>
#include <sstream>

using namespace std;

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double x = 0, double y = 0)
{
	this->x = x;
	this->y = y;
}

Complex::Complex(const Complex& i)
{
	this->x = i.x;
	this->y = i.y;
}

Complex::~Complex()
{ }

Complex& Complex::operator = (const Complex& i)
{
	x = i.x;
	y = i.y;

	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << " X = " << x << endl;
	ss << " Y = " << y << endl;

	return ss.str();
}

Complex operator + (const Complex& x, const Complex& y)
{
	return Complex(x.x + y.x, x.y + y.y);
}

Complex operator - (const Complex& x, const Complex& y)
{
	return Complex(x.x - y.x, x.y - y.y);
}

Complex operator * (const Complex& x, const Complex& y)
{
	return Complex(x.x * y.x, x.y * y.y);
}

Complex operator / (const Complex& x, const Complex& y)
{
	return Complex(x.x / y.x, x.y / y.y);
}

Complex& Complex::operator += (const Complex& x)
{
	this->x += x.x;
	this->y += x.y;

	return *this;
}

Complex& Complex::operator -= (const Complex& x)
{
	this->x -= x.x;
	this->y -= x.y;

	return *this;
}

Complex& Complex::operator *= (const Complex& x)
{
	this->x *= x.x;
	this->y *= x.y;

	return *this;
}

Complex& Complex::operator /= (const Complex& x)
{
	this->x /= x.x;
	this->y /= x.y;

	return *this;
}

ostream& operator << (ostream& out, const Complex& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Complex& x)
{
	cout << endl;
	cout << " X = "; in >> x.x;
	cout << " Y = "; in >> x.y;
	cout << endl;

	return in;
}

Complex& Complex::operator ++()
{
	x++;
	y++;

	return *this;
}

Complex& Complex::operator --()
{
	x--;
	y--;

	return *this;
}

Complex Complex::operator ++(int)
{
	Complex t(*this);
	x++;
	y++;

	return t;
}

Complex Complex::operator --(int)
{
	Complex t(*this);
	x--;
	y--;

	return t;
}