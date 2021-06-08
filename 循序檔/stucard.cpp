#include<iostream>
#include<string>
#include<iomanip>
#include <fstream>
#include <sstream>
#include"StuCard.h"
using namespace std;

StuCard::StuCard() 
{}
StuCard::StuCard(string name, bool sex, double scoreAry0, double scoreAry1, double scoreAry2) 
{
	this->name = name;
	this->sex = sex;
	this->scoreAry[0] = scoreAry0;
	this->scoreAry[1] = scoreAry1;
	this->scoreAry[2] = scoreAry2;
}
void StuCard::setName(string name) 
{
	this->name = name;
}
void StuCard::setSex(bool sex) 
{
	this->sex = sex;
}
void StuCard::setScore(int n, double scoreAry) 
{
	this->scoreAry[n] = scoreAry;
}
string StuCard::getName() 
{
	return name;
}
bool StuCard::getSex() 
{
	return sex;
}
double StuCard::getScore(int n) 
{
	return scoreAry[n];
}
void StuCard::writeToFile() 
{
	fstream file;
	stringstream ss;
	file.open("test.txt", ios::out | ios::app);
	file << name << " " << sex << " " << scoreAry[0] << " " << scoreAry[1] << " " << scoreAry[2] << "\n";
	file.close();
}
void StuCard::readFromFile() 
{
	ifstream input("test.txt");
	string name;
	bool sex;
	double scoreAry0, scoreAry1, scoreAry2;
	for (int i = 0; i < 5; i++) {
		input >> name >> sex >> scoreAry0 >> scoreAry1 >> scoreAry2;
		cout << setprecision(1) << fixed << name << " " << sex << " " << scoreAry0 << " " << scoreAry1 << " " << scoreAry2 << endl;
	}
	input.close();
}
