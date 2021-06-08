#include "Sphere.h"
#include <sstream>
Sphere::Sphere()
{}
Sphere::Sphere(double _r,string _c)
{
	setColor(_c);
	radius = _r;
}
double Sphere::getRadius()
{
	return radius;
}
void Sphere::setRadius(double _r)
{
	radius = _r;
}
double Sphere::getVolume()
{
	return 4.0 / 3.0*3.14159* radius *radius*radius;
}
string Sphere::toString()
{
	stringstream ss;
	ss << "Sphere:(" << radius << ")";
	return ss.str();
}
