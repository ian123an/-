#ifndef Cube_H
#define Cube_H
#include"GeometricObject.h"
#include<iostream>
#include<string>
using namespace std;
class Cube : public GeometricObject 
{
private:
	double length;
public:
	Cube(double, string);
	void setLength(double);
	double getLength();
	double getVolume();
	double getArea();
};
#endif
