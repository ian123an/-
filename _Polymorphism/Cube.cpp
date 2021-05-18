#include"GeometricObject.h"
#include<iostream>
#include"Cube.h"
#include<string>
using namespace std;

Cube::Cube(double length, string color) 
{
	this->length = length;
	this->setColor(color);
}
void Cube::setLength(double length) 
{
	this->length = length;
}
double Cube::getLength() 
{
	return length;
}
double Cube::getVolume() 
{
	return length * length * length;
}
double Cube::getArea() 
{
	return 6 * length * length;
}
