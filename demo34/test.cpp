#include<iostream>
using namespace std;

//关于继承当中类模板的一些问题

template<class T>
class Base
{
public:
	T tt;
};

template<class T1,class T2>
class Son :public Base<T2>//继承模板时，需要指定父类中参数模板类型，或者继续写模板
{
public:
	Son()
	{
		cout << "T1的类型："<<typeid(T1).name() << endl;
		cout << "T2的类型：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test01()
{
	Son<int, char>son;
}
int main()
{
	test01();
	system("pause");
	return 0;
}