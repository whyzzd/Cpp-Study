#include<iostream>
#include<string>
using namespace std;
//函数运算符重载
class MyPrint
{
public:
	
	void operator()(string sss)
	{
	
		cout << sss << endl;
	}
	

};
//（）运算符的形式没有固定的格式
class Add
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test()
{
	MyPrint mp;
	mp("haohaoxuexi ");//注意取别于函数调用，这里是“函数调用运算符”重载，用的是对象名。
}

void test02()
{
	Add add;
	cout << add(1, 5) << endl;
	//也可以使用匿名对象使用，用完即被销毁
	cout << Add()(5, 6) << endl;
}
int main()
{
	test();
	test02();
	system("pause");
	return 0;
}