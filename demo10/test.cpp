#include<iostream>
#include<string>
using namespace std;

class Building
{
	friend void test00(Building &B0);//全局函数做友元 关键：类似于声明，前面加一个friend
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	
	string m_BedRoom;
};


void test00(Building &B0)
{
	cout << "你的朋友正在访问:" << B0.m_SittingRoom << endl;
	cout << "你的朋友正在访问:" << B0.m_BedRoom << endl;
}

void test01()
{
	Building B;
	test00(B);
}
int main()
{
	test01();
	system("pause");
	return 0;
}