#ifndef Ball_H
#define Ball_H
#include"GeometricObject.h"
#include<iostream>
#include<string>
using namespace std;
class Ball : public GeometricObject 
{
private:
	double radius;
public:
	Ball(double, string);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
};
#endif
