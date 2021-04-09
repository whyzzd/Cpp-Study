#include<iostream>
using namespace std;
class Person
{
public:
	void chang() const
	{
		m_b = 3;
		cout << "常函数例子" << endl;
		
	}
	void  putong()
	{
		m_b = 3;
		cout << "普通函数例子" << endl;
	}
	int m_a;
	mutable int m_b;//成员变量加上mutable之后常函数和常对象可以对他进行修改属性
};

void test()
{
	const Person p;//常对象只能调用常函数及被加了mutable的变量
	p.chang();
	p.m_b=23;

}
int main()
{
	test();
	system("pause");
	return  0;
}