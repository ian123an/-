#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

int main()
{
	double x,y,z,w;
	cin>>x>>y>>z>>w;
	Rectangle rectangle1(x, y);
	Rectangle rectangle2(z, w);

	cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
	rectangle2.width = 2.5;
	rectangle2.height = 5.0;
	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
	return 0;
}
