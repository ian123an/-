#include "Shape.h"

Shape::Shape()
{}
Shape::Shape(string _c)
{
	color = _c;
}
void Shape::setColor(string _c)
{
	color = _c;
}
string Shape::getColor()
{
	return color;
}
