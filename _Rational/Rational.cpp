#include "Rational.h"
#include <sstream> 
#include <cstdlib>
Rational::Rational()
{
	numerator = 0;//分子
	denominator = 1;//分母
}

Rational::Rational(int numerator, int denominator)
{
	int factor = gcd(numerator, denominator);//輾轉相除法
	this->numerator = (denominator > 0 ? 1 : -1) * numerator / factor;
	this->denominator = abs(denominator) / factor;//絕對值
}

int Rational::getNumerator() const
{
	return numerator;
}

int Rational::getDenominator() const
{
	return denominator;
}

int Rational::gcd(int n, int d)
{
	int n1 = abs(n);
	int n2 = abs(d);
	int gcd = 1;

	for (int k = 1; k <= n1 && k <= n2; k++)
	{
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k;
	}
	return gcd;
}

Rational Rational::add(const Rational& secondRational) const
{
	int n = numerator * secondRational.getDenominator() +
		denominator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}

Rational Rational::subtract(const Rational& secondRational) const
{
	int n = numerator * secondRational.getDenominator()- 
		denominator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}

Rational Rational::multiply(const Rational& secondRational) const //乘
{
	int n = numerator * secondRational.getNumerator();
	int d = denominator * secondRational.getDenominator();
	return Rational(n, d);
}

Rational Rational::divide(const Rational& secondRational) const //除
{
	int n = numerator * secondRational.getDenominator();
	int d = denominator * secondRational.numerator;
	return Rational(n, d);
}

int Rational::compareTo(const Rational& secondRational) const //比较两个变量并return -1、1或0，表示>，<和=
{
	Rational temp = subtract(secondRational);
	if (temp.getNumerator() < 0)
		return -1;
	else if (temp.getNumerator() == 0)
		return 0;
	else
		return 1;
}

bool Rational::equals(const Rational& secondRational) const //將範圍內的元素進行比較
{
	if (compareTo(secondRational) == 0)
		return true;
	else
		return false;
}

int Rational::intValue() const
{
	return getNumerator() / getDenominator();
}

double Rational::doubleValue() const
{
	return 1.0 * getNumerator() / getDenominator();
}

string Rational::toString() const
{
	stringstream ss;
	ss << numerator;

	if (denominator > 1)
		ss << "/" << denominator;

	return ss.str();
}

Rational::Rational(int numerator)
{
	this->numerator = numerator;
	this->denominator = 1;
}

Rational& Rational::operator+=(const Rational& secondRational)
{
	*this = add(secondRational);
	return *this;
}

Rational& Rational::operator-=(const Rational& secondRational)
{
	*this = subtract(secondRational);
	return *this;
}

Rational& Rational::operator*=(const Rational& secondRational)
{
	*this = multiply(secondRational);
	return *this;
}

Rational& Rational::operator/=(const Rational& secondRational)
{
	*this = divide(secondRational);
	return *this;
}

int& Rational::operator[](int index)
{
	if (index == 0)
		return numerator;
	else
		return denominator;
}

Rational& Rational::operator++()
{
	numerator += denominator;
	return *this;
}

Rational& Rational::operator--()
{
	numerator -= denominator;
	return *this;
}

Rational Rational::operator++(int dummy)
{
	Rational temp(numerator, denominator);
	numerator += denominator;
	return temp;
}

Rational Rational::operator--(int dummy)
{
	Rational temp(numerator, denominator);
	numerator -= denominator;
	return temp;
}

Rational Rational::operator+()
{
	return *this;
}

Rational Rational::operator-()
{
	return Rational(-numerator, denominator);
}

ostream& operator<<(ostream& out, const Rational& rational)
{
	if (rational.denominator == 1)
		out << rational.numerator;
	else
		out << rational.numerator << "/" << rational.denominator;
	return out;
}

istream& operator>>(istream& in, Rational& rational)
{
	cout << "Enter numerator: ";
	in >> rational.numerator;

	cout << "Enter denominator: ";
	in >> rational.denominator;
	return in;
}

bool operator<(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) < 0);
}

bool operator<=(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) <= 0);
}

bool operator>(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) > 0);
}

bool operator>=(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) >= 0);
}

bool operator==(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) == 0);
}

bool operator!=(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) != 0);
}

Rational operator+(const Rational& r1, const Rational& r2)
{
	return r1.add(r2);
}

Rational operator-(const Rational& r1, const Rational& r2)
{
	return r1.subtract(r2);
}

Rational operator*(const Rational& r1, const Rational& r2)
{
	return r1.multiply(r2);
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	return r1.divide(r2);
}
