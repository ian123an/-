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
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	void swapByReference(Rectangle &r2);
	void swapByPointer(Rectangle *r2);
};
#endif
