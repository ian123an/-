#include<iostream>
#include"Score.h"

Score::Score()
{}
Score::Score(string newName,int newMath)
{
	name = newName;
	math = newMath;
}
void Score::setName(string n)
{
	name = n;
}
void Score::setMath(int m)
{
	math = m;
}
string Score::getName()
{
	return name;
}
int Score::getMath()
{
	return math;
}
