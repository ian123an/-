#ifndef STUCARD_H
#define STUCARD_H
#include <string>
using namespace std;
class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
public:
	StuCard();
	StuCard(string, bool, double, double, double);
	void setName(string);
	void setSex(bool);
	void setScore(int, double);
	string getName();
	bool getSex();
	double getScore(int);
	void writeToFile();
	void readFromFile();
};
#endif
