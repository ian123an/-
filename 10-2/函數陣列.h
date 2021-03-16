#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<string>
using namespace std;

class Rectangle
{
public:
	Rectangle();
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getArea();
private:
	double width, height;
};
#endif
