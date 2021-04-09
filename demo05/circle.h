#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class Circle
{
public:
	void setC_R(int r);
	
	int getC_R();
	
	void setC_P(Point p);
	
	Point getC_P();
	
private:
	int c_r;
	Point c_p;
};