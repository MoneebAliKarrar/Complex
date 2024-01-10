#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
using namespace std;
class Complex {
  public:
	double real;
	double imag;
	Complex();
	Complex(double r, double i);

	Complex operator-() const;

	Complex operator+(const Complex& a) const;
	Complex operator-(const Complex& a) const;
	Complex operator*(const Complex& a) const;
	Complex operator/(const Complex& a) const;

	Complex& operator+=(const Complex& a);
	Complex& operator+=(double b);

	Complex& operator-=(const Complex& a);
	Complex& operator-=(double b);

	Complex& operator*=(const Complex& a);
	Complex& operator*=(double b);

	Complex& operator/=(const Complex& a);
	Complex& operator/=(double b);

	bool operator==(const Complex& a) const;

	bool operator!=(const Complex& a) const;

	double amplitude() const;
	double phase() const;
};
ostream& operator<<(ostream& str, const Complex& c);

Complex operator+(const Complex& a, double b);
Complex operator+(double b, const Complex& a);

Complex operator-(const Complex& a, double b);
Complex operator-(double b, const Complex& a);

Complex operator*(const Complex& a, double b);
Complex operator*(double b, const Complex& a);

Complex operator/(const Complex& a, double b);

bool operator==(const Complex& a, double b);
bool operator==(double b, const Complex& a);

bool operator!=(const Complex& a, double b);
bool operator!=(double b, const Complex& a);
#endif // COMPLEX_H_INCLUDED
