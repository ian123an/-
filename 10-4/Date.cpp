#include"Date.h"
#include<iostream>
using namespace std;

Date::Date()
{}
Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void Date::setMonth(int m)
{
	month = m;
}
void Date::setDay(int d)
{
	day = d;
}
void Date::setYear(int y)
{
	year = y;
}
int Date::getMonth() const
{
	return month;
}
int Date::getDay() const
{
	return day;
}
int Date::getYear() const
{
	return year;
}
void Date::print()
{
	cout << getMonth() << "/" << getDay() << "/" << getYear();
}
