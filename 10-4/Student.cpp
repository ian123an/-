#include"Student.h"
#include"Date.h"
#include<iostream>

Student::Student(string n, Date d, int x)
{
	name = n;
	birthDay = d;
	score = x;
}
void Student::setName(string n)
{
	name = n;
}
void Student::setDate(Date x)
{
	birthDay = x;
}
void Student::setScore(int y)
{
	score = y;
}
string Student::getName() const
{
	return name;
}
Date Student::getDate() const
{
	return birthDay;
}
int Student::getScore() const
{
	return score;
}
void Student::print()
{
	cout << getName() << " ";
	birthDay.print();
	cout << " " << score << endl;
}
