#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
public:
	double width, height;
	Rectangle();
	Rectangle(double newWidth, double newHeight);
	double getArea();
	double getPerimeter();
};
#endif
