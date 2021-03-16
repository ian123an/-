#include<iostream>
#include"BMI.h"

BMI::BMI()
{
	weight = 1;
	height = 1;
}
BMI::BMI(double newWeight, double newHeight)
{
	weight = newWeight;
	height = newHeight;
}
double BMI::getBMI()
{
	return weight / (height*height);
}
void BMI::setWeight(double x)
{
	weight = x;
}
void BMI::setHeight(double y)
{
	height = y;
}
