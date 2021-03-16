#include"Rectangle.h"

Rectangle::Rectangle()
{}
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
