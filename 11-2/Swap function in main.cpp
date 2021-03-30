#include "Rectangle.h"

Rectangle::Rectangle(double x, double y)
{
	width = x;
	height = y;
}
void Rectangle::setWidth(double x)
{
	width = x;
}
void Rectangle::setHeight(double y)
{
	height = y;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return width * height;
}
