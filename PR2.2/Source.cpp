#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex d;
	Complex a, b;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << endl;

	cout << "a + b: " << a + b;
	cout << "a - b: " << a - b;
	cout << "a * b: " << a * b;
	cout << "a / b: " << a / b;
	d = (a += b);
	cout << "a += b: " << d;
	d = (a -= b);
	cout << "a -= b: " << d;
	d = (a *= b);
	cout << "a *= b: " << d;
	d = (a /= b);
	cout << "a /= b: " << d;

	cout << "a++: " << a++;
	cout << "res: " << a;
	cout << "++a: " << ++a;

	cout << "a--: " << a--;
	cout << "res: " << a;
	cout << "--a: " << --a;

	system("pause");
	return 0;
}