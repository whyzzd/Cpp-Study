#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

void isInCircle(Circle &c,Point &p)
{
	int distance = (c.getC_P().getX() - p.getX())*(c.getC_P().getX() - p.getX()) +
		(c.getC_P().getY() - p.getY())*(c.getC_P().getY() - p.getY());
	int rdistance = c.getC_R()*c.getC_R();//�״�㣺����get����ʱ��������Ҫ�Լ��򣬲��ܵ��ˣ�
	if(rdistance<distance)
	{
		cout << "����Բ��;" << endl;
	}
	else if (rdistance = distance)
	{
		cout << "����Բ�ϣ�" << endl;
	}
	else
	{
		cout << "����Բ�ڣ�" << endl;
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
	//�ؼ��㣺������ʹ�ñ���࣬�ڴ�����Բ�ĵ�����͵�����궼ʹ�á��㡱���ࣻ
	Point p;
	p.setX(10);
	p.setY(11);
	isInCircle(c, p);
	system("pause");
	return 0;
}