#include<iostream>
using namespace std;
#include<string>
//全局函数在类模板 类内实现和在类外实现

template<class T1,class T2>
class Person
{
	//全局函数的类内实现
	friend void printPerson(Person<T1,T2> p1)
	{
		cout << "姓名：" << p1.m_Name << "年龄：" << p1.m_Age << endl;
	}
	//全局函数的类外实现
	friend void printPerson2(Person<T1, T2>p2);
public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

//这样出现的问题在与 printPerson2是一个普通的全局函数，加上template之后就会变成函数模板
template<class T1,class T2>
void printPerson2(Person<T1, T2>p2)
{
	cout << "姓名：" << p1.m_Name << "年龄：" << p1.m_Age << endl;
}
void test01()
{
	Person<string, int>p1("张三", 18);
	printPerson(p1);
}

void test02()
{
	Person<string, int>p2("李四", 20);
	printPerson(p2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}