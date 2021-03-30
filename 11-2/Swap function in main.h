#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
private:
	double width, height;
public:
	Rectangle(double, double);
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getArea();
};
#endif
