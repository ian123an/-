#include<iostream>
#include<string>
#include"GeometricObject.h"
using namespace std;

GeometricObject::GeometricObject() 
{}
void GeometricObject::setColor(string color) 
{
	this->color = color;
}
string    GeometricObject::getColor() 
{
	return color;
}
