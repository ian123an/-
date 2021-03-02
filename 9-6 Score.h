#ifndef SCORE_H
#define SCORE_H
#include<string>
using namespace std;

class Score
{
public:
	Score();
	Score(string,int);
	void setName(string);
	void setMath(int);
	string getName();
	int getMath();
	void print();
private:
	string name;
	int math;
};
#endif
