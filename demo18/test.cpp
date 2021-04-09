#include<iostream>
using namespace std;
class Base
{
public:
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
};
int Son::m_A = 200;
void test01()
{
	
	//通过创建对象来访问成员
	Son s;
	cout << "s.m_A->"<<s.m_A << endl;
	cout << "s.Base::m_A->"<<s.Base::m_A << endl;
	//通过类名来访问成员变量,若子类中出现了与父类有相同的成员变量或者函数，则会覆盖父类所有的
	cout << "Son::m_A->"<<Son:: m_A << endl;
	cout << "Son::Base::m_A->"<<Son::Base::m_A<<endl;

	//成员函数在类内定义
}
int main()
{
	test01();
	system("pause");
	return 0;
}