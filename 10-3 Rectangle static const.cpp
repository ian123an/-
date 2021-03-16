#include"Rectangle.h"

int Rectangle::numOfRect = 0;
Rectangle::Rectangle()
{
	numOfRect++;
}
void Rectangle::setWidth(double x)
{
	width = x;
}
void Rectangle::setHeight(double y)
{
	height = y;
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::getHeight() const
{
	return height;
}
double Rectangle::getArea() const
{
	return width * height;
}
int Rectangle::getNumOfRect()
{
	return numOfRect;
}
