#include<iostream>
using namespace std;
#include<string>


class Person
{
public:
	/*Person operator+(Person &p)//成员函数运算符重载！！本质是p3=p1.operator+(p2)
	{
		Person pp;
		pp.m_A = this->m_A + p.m_A;
		pp.m_B = this->m_B + p.m_B;
		return pp;
	}*/
public:
	int m_A;
	int m_B;
private:
};

Person operator+(Person &p1, Person &p2)//全局函数运算符重载！！本质是p3=operator+(p1,p2)
{
	Person p3;
	p3.m_A = p1.m_A + p2.m_A;
	p3.m_B = p1.m_B + p2.m_B;
	return p3;
}

Person operator+(Person &p1,int num)//在发生运算符重载的时候，也可以重载函数
{
	Person p2;
	p2.m_A = p1.m_A + num;
	p2.m_B = p1.m_B + num;
	return p2;
}
void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person p3;
	p3 = p1 + p2;
	Person p4 = p1 + 100;
	cout << "p3.m_A的值是：" << p3.m_A << endl;
	cout << "p3.m_B的值是：" << p3.m_B << endl;
	cout << "p4.m_A的值是：" << p4.m_A << endl;
	cout << "p4.m_B的值是：" << p4.m_B << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}