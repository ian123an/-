#ifndef GeometricObject_H
#define GeometricObject_H
#include<iostream>
#include<string>
using namespace std;
class GeometricObject 
{
private:
	string color;
public:
	GeometricObject();
	void setColor(string);
	string    getColor();
};
#endif
