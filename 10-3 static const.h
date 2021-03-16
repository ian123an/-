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
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	static int getNumOfRect();
private:
	double width, height;
	static int numOfRect;
};
#endif
