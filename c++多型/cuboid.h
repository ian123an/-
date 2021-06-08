#ifndef CUBOID_H
#define CUBIOD_H
#include <string>
#include "Shape.h"
using namespace std;
class Cuboid : public Shape
{
private:
	double length, width, height;
public:
	Cuboid();
	Cuboid(double, double, double,string);
	double getLength();
	double getWidth();
	double getHeight();
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	double getVolume();
	string toString();
};
#endif
