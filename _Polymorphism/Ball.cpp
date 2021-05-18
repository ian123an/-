#include"GeometricObject.h"
#include"Ball.h"
#include<iostream>
#include<string>
using namespace std;

Ball::Ball(double radius, string color) 
{
	this->radius = radius;
	this->setColor(color);
}
void Ball::setRadius(double radius) 
{
	this->radius = radius;
}
double Ball::getRadius() 
{
	return radius;
}
double Ball::getVolume() 
{
	return double(4) / double(3)*3.14159*radius*radius*radius;
}
double Ball::getArea() 
{
	return 4 * 3.14159*radius*radius;
}
