#include "Cuboid.h"
#include <sstream>
Cuboid::Cuboid(double _l,double _w,double _h, string _c)
{
	length = _l;
	width = _w;
	height = _h;
	setColor(_c);
}
double Cuboid::getLength()
{
	return length;
}
double Cuboid::getWidth()
{
	return width;
}
double Cuboid::getHeight()
{
	return height;
}
void Cuboid::setLength(double _l)
{
	length = _l;
}
void Cuboid::setWidth(double _w)
{
	width = _w;
}
void Cuboid::setHeight(double _h)
{
	height = _h;
}
double Cuboid::getVolume()
{
	return length * width * height;
}
string Cuboid::toString()
{
	stringstream ss;
	ss << "Cuboid:(" << length <<"," << width << "," << height << ")";
	return ss.str();
}
