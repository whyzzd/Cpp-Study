#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger &m);
public:
	MyInteger()
	{
		m_Num=0;
	}
	//前置运算符。
	MyInteger& operator++()//重载++运算符，返回MyInteger&是 因为要++可能要复用，&是因为从头到尾都对同一个对象操作
	{
		m_Num++;
		return *this;
	}
	//重载后置++运算符。注意：后置递增返回的一定是值，因为在函数调用完成之后，对象也会随之释放；
	MyInteger operator++(int)
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}
private:
	int m_Num;//函数重载的条件：同一个作用域，函数命一样，参数不一个样，个数不一样，类型不一样，顺序不一样
	
};
ostream& operator<<(ostream &cout, MyInteger &m)//<<运算符也需要重载
{
	cout << m.m_Num;
	return cout;
}

void test01()
{
	MyInteger m;

	cout << ++(++m) << endl;
	cout <<m<< endl;
}

void test02()
{
	MyInteger m1;
	cout << m1++ << endl;
	cout << m1 << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}