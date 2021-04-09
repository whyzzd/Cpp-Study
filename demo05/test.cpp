#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

void isInCircle(Circle &c,Point &p)
{
	int distance = (c.getC_P().getX() - p.getX())*(c.getC_P().getX() - p.getX()) +
		(c.getC_P().getY() - p.getY())*(c.getC_P().getY() - p.getY());
	int rdistance = c.getC_R()*c.getC_R();//易错点：在用get函数时，括号需要自己打，不能掉了！
	if(rdistance<distance)
	{
		cout << "点在圆外;" << endl;
	}
	else if (rdistance = distance)
	{
		cout << "点在圆上；" << endl;
	}
	else
	{
		cout << "点在圆内；" << endl;
	}

}
int main()
{
	
	Circle c;
	c.setC_R(10);
	Point c_p;
	c_p.setX(10);
	c_p.setY(0);
	c.setC_P(c_p);
	//关键点：类里面使用别的类，在此例中圆心的坐标和点的坐标都使用“点”的类；
	Point p;
	p.setX(10);
	p.setY(11);
	isInCircle(c, p);
	system("pause");
	return 0;
}