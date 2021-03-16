#ifndef BMI_H
#define BMI_H
#include<string>
using namespace std;

class BMI
{
public:
	BMI();
	BMI(double, double);
	double getBMI();
	void setWeight(double);
	void setHeight(double);

private:
	double weight, height;
	string name;
};
#endif
