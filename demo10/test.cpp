#include<iostream>
#include<string>
using namespace std;

class Building
{
	friend void test00(Building &B0);//ȫ�ֺ�������Ԫ �ؼ���������������ǰ���һ��friend
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	
	string m_BedRoom;
};


void test00(Building &B0)
{
	cout << "����������ڷ���:" << B0.m_SittingRoom << endl;
	cout << "����������ڷ���:" << B0.m_BedRoom << endl;
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