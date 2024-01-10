#include <iostream>

#include "Complex.h"
using namespace std;

void display(const Complex& a, const Complex& b);
void test(const Complex& c1, const Complex& c2);
void testAddition(const Complex& c1, const Complex& c2);
void testSubtraction(const Complex& c1, const Complex& c2);
void testMultiplication(const Complex& c1, const Complex& c2);
void testDivision(const Complex& c1, const Complex& c2);
void testAdditionAssignment(const Complex& c1);
void testSubtractionAssignment(const Complex& c1);
void testMultiplicationAssignment(const Complex& c1);
void testDivisionAssignment(const Complex& c1);
void testComparison(const Complex& c1, const Complex& c2);
void test_Amplitude_Phase(const Complex& c1);
void testNegation(const Complex& c1);
void testConstructor();
void testAssignment();

int main()
{

	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "out and initial complex numbers " << endl;
	Complex c1(2.0, 0.0);
	Complex c2(4.0, 3.0);
	display(c1, c2);
	test(c1, c2);
}
void display(const Complex& c1, const Complex& c2)
{
	cout << "Complex c1: " << c1 << endl;
	cout << "Complex c2: " << c2 << endl;
}
void test(const Complex& c1, const Complex& c2)
{
	testAddition(c1, c2);
	testSubtraction(c1, c2);
	testMultiplication(c1, c2);
	testDivision(c1, c2);
	testAdditionAssignment(c1);
	testSubtractionAssignment(c1);
	testMultiplicationAssignment(c1);
	testDivisionAssignment(c1);
	testComparison(c1, c2);
	test_Amplitude_Phase(c1);
	testNegation(c1);
	testConstructor();
	testAssignment();
}
void testConstructor()
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "constructor " << endl;
	Complex c1(1.0, 1.0);
	Complex c2(c1);
	cout << c2 << endl;
}
void testAssignment()
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "assignment " << endl;
	Complex c1(1.0, 1.0);
	Complex c2 = c1;
	cout << c2 << endl;
}
void testAddition(const Complex& c1, const Complex& c2)
{

	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "addition " << endl;
	Complex c = c1 + c2;
	cout << "Sum of Complexes c1 and c2: " << c << endl;

	c = c1 + 3.1;
	cout << "Sum of Complex c1 and 3.1: " << c << endl;

	c = 3.1 + c1;
	cout << "Sum of 3.1 and Complex c1: " << c << endl;
}
void testSubtraction(const Complex& c1, const Complex& c2)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "subtracion " << endl;
	cout << "Difference of Complex c1 and c2: " << c1 - c2 << endl;
	cout << "Difference of Complex c2 and c1: " << c2 - c1 << endl;
	cout << "Difference of Complex c1 and 7.2: " << c1 - 7.2 << endl;
	cout << "Difference of 7.2 and Complex c1: " << 7.2 - c1 << endl;
}
void testMultiplication(const Complex& c1, const Complex& c2)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "multiplication " << endl;
	cout << "Product of Complexes c1 and c2: " << c1 * c2 << endl;
	cout << "2 multiplied by Complex c1: " << 2 * c1 << endl;
	cout << "Complex c1 multiplied by 2: " << c1 * 2 << endl;
}
void testDivision(const Complex& c1, const Complex& c2)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "division " << endl;
	Complex c = c1 / c2;
	cout << "Division of Complexes c1 and c2: " << c << endl;
	c = c1 / 7;
	cout << "Division of Complex c1 by 7 : " << c << endl;
}
void testAdditionAssignment(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "addition and asignment += " << endl;
	Complex a;
	a += c1;
	Complex b;
	b += 7.0;
	Complex c;
	Complex d;
	c += a += b;
	(d += a) += b;
	cout << "Addition and assignment of c1 to Complex a += c1 : " << a << endl;
	cout << "Addition and assignment of 7.0 to Complex b += 7.0 : " << b
		 << endl;
	cout << "Addition and assignment c += a += b : " << c << endl;
	cout << "Addition and assignment (d+=a) += b : " << d << endl;
}
void testSubtractionAssignment(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "subtraction and asignment -= " << endl;
	Complex a;
	a -= c1;
	Complex b;
	b -= 7.0;
	Complex c;
	Complex d;
	c -= a -= b;
	(d -= a) -= b;
	cout << "subtraction and assignment of c1 to Complex a -= c1 : " << a
		 << endl;
	cout << "subtraction and assignment of 7.0 to Complex b -= 7.0 : " << b
		 << endl;
	cout << "subtraction and assignment c -= a -= b : " << c << endl;
	cout << "subtraction and assignment (d-=a) -= b : " << d << endl;
}
void testMultiplicationAssignment(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "multiplication and asignment *= " << endl;
	Complex a(1.0, 1.0);
	a *= c1;
	Complex b(1.0, 1.0);
	b *= 7.0;
	Complex c(1.0, 1.0);
	c *= a *= b;
	(c *= a) *= b;
	cout << "Multiplication and assignment of c1 to 1.0+1.0i : " << a << endl;
	cout << "Multiplication and assignment of 7.0 to 1.0+1.0i : " << b << endl;
	cout << "Multiplication and assignment of     c *= a *= b : " << c << endl;
	cout << "Multiplication and assignment of (c *=a) *= b : " << c << endl;
}
void testDivisionAssignment(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "devision and asignment /= " << endl;
	Complex a(1.0, 1.0);
	a /= c1;
	Complex b(1.0, 1.0);
	b /= 7.0;
	Complex c(1.0, 1.0);
	c /= a /= b;
	(c /= a) /= b;
	cout << "devision and assignment of c1 to 1.0+1.0i : " << a << endl;
	cout << "devision and assignment of 7.0 to 1.0+1.0i : " << b << endl;
	cout << "devision and assignment of c /= a /= b : " << c << endl;
	cout << "devision and assignment of (c /= a) /= b : " << c << endl;
}
void testComparison(const Complex& c1, const Complex& c2)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "comparison == and !=" << endl;
	bool s1 = c1 == c1;
	bool s2 = c1 == c2;
	bool s3 = c1 != c1;
	bool s4 = c1 != c2;
	cout << "The value of c1 == c1 " << s1 << endl;
	cout << "The value of c1 == c2 " << s2 << endl;
	cout << "The value of c1 != c1 " << s3 << endl;
	cout << "The value of c1 != c2 " << s4 << endl;
}
void test_Amplitude_Phase(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "amplitude and phase " << endl;
	double ampt = c1.amplitude();
	cout << "the amplitude is :" << ampt << endl;
	double phas = c1.phase();
	if (phas != 0) {
		cout << "the phase is :" << phas << endl;
	}
}
void testNegation(const Complex& c1)
{
	cout << "------------------------------------------------------------------"
			"---"
		 << endl;
	cout << "Negation " << endl;
	cout << "Negation of Complex c1: " << -c1 << endl;
}
