#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
public:
	Rectangle();
	Rectangle(double newWidth, double newHeight);
	double getArea();
	double getPerimeter();
	void setWidth(double);
	void setHeight(double);
private:
	double width, height;
};
#endif
