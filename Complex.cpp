#include "Complex.h"
#include <cmath>
using namespace std;
Complex::Complex()
{
	real = 0.0;
	imag = 0.0;
}
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}
// display<< oerator
ostream& operator<<(ostream& str, const Complex& c)
{
	str << c.real << "+" << c.imag << "i" << endl;
	return str;
}
// arithmetic operation + - * /
Complex Complex::operator+(const Complex& a) const
{
	return Complex(real + a.real, imag + a.imag);
}
Complex operator+(const Complex& a, double b)
{
	return Complex(a.real + b, a.imag);
}
Complex operator+(double b, const Complex& a)
{
	return Complex(a.real + b, a.imag);
}

Complex Complex::operator-(const Complex& a) const
{
	return Complex(real - a.real, imag - a.imag);
}
Complex operator-(const Complex& a, double b)
{
	return Complex(a.real - b, a.imag);
}
Complex operator-(double b, const Complex& a)
{
	return Complex(b - a.real, -a.imag);
}

Complex Complex::operator*(const Complex& a) const
{
	return Complex(real * a.real - imag * a.imag,
				   real * a.imag + imag * a.real);
}
Complex operator*(const Complex& a, double b)
{
	return Complex(a.real * b, a.imag * b);
}
Complex operator*(double b, const Complex& a)
{
	return Complex(a.real * b, a.imag * b);
}
Complex Complex::operator/(const Complex& a) const
{
	double denominator = a.real * a.real + a.imag * a.imag;
	double newReal = (real * a.real + imag * a.imag) / denominator;
	double newImag = (imag * a.real - real * a.imag) / denominator;
	return Complex(newReal, newImag);
}
Complex operator/(const Complex& a, double b)
{
	if (b == 0.0) {
		cout << ("Division by zero") << endl;
		exit(1);
	}
	else {
		return Complex(a.real / b, a.imag / b);
	}
}
// arithmetic operation += -= *= /=
Complex& Complex::operator+=(const Complex& a)
{
	this->real += a.real;
	this->imag += a.imag;
	return *this;
}
Complex& Complex::operator+=(double b)
{
	this->real += b;
	this->imag += 0.0;
	return *this;
}
Complex& Complex::operator-=(const Complex& a)
{
	this->real -= a.real;
	this->imag -= a.imag;
	return *this;
}
Complex& Complex::operator-=(double b)
{
	this->real -= b;
	this->imag -= 0.0;
	return *this;
}
Complex& Complex::operator*=(const Complex& a)
{
	double newReal = (real * a.real) - (imag * a.imag);
	double newImag = (real * a.imag) + (imag * a.real);
	this->real = newReal;
	this->imag = newImag;
	return *this;
}
Complex& Complex::operator*=(double b)
{
	double newReal = (real * b);
	double newImag = (imag * b);
	this->real = newReal;
	this->imag = newImag;
	return *this;
}
Complex& Complex::operator/=(const Complex& a)
{
	double denominator = a.real * a.real + a.imag * a.imag;
	double newReal = (real * a.real + imag * a.imag) / denominator;
	double newImag = (imag * a.real - real * a.imag) / denominator;
	this->real = newReal;
	this->imag = newImag;
	return *this;
}
Complex& Complex::operator/=(double b)
{
	if (b == 0) {
		cout << ("Division by zero") << endl;
		exit(1);
	}
	else {
		double newReal = real / b;
		double newImag = imag / b;
		this->real = newReal;
		this->imag = newImag;
		return *this;
	}
}
// comparison operators
bool Complex::operator==(const Complex& a) const
{
	return real == a.real && imag == a.imag;
}
bool operator==(const Complex& a, double b)
{
	return a.real == b && a.imag == 0.0;
}
bool operator==(double b, const Complex& a)
{
	return b == a.real && a.imag == 0.0;
}

bool Complex::operator!=(const Complex& a) const
{
	return real != a.real || imag != a.imag;
}
bool operator!=(const Complex& a, double b)
{
	return a.real != b || a.imag != 0.0;
}
bool operator!=(double b, const Complex& a)
{
	return b != a.real || a.imag != 0.0;
}
// amplitude and phase
double Complex::amplitude() const
{
	return sqrt(real * real + imag * imag);
}
double Complex::phase() const
{
	if (this->imag == 0 || this->amplitude() == 0) {
		cout << "this is undefined phase " << endl;
		return 0;
	}
	return atan2(imag, real);
}
// unary minus
Complex Complex::operator-() const
{
	return Complex(-real, -imag);
}
