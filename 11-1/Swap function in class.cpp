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

void Rectangle::swapByReference(Rectangle &r2)
{
	Rectangle a = *this;
	*this = r2;
	r2 = a;

}
void Rectangle::swapByPointer(Rectangle *r2)
{
	Rectangle a = *this;
	*this = *r2;
	*r2 = a;
}
