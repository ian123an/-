#ifndef SPHERE_H
#define SPHERE_H
#include <string>
#include "Shape.h"
using namespace std;
class Sphere : public Shape
{
private:
	double radius;
public:
	Sphere();
	Sphere(double,string);
	double getRadius();
	void setRadius(double);
	double getVolume();
	string toString();
};
#endif
