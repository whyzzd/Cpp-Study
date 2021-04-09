#include<iostream>
using namespace std;
#include<string>
//类模板对象做函数参数
//1.指定传入类型
//2.参数模板化
//3.整个类模板化

template<class nameType,class ageType>
class Person
{
public:
	Person(nameType name, ageType age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout<< "name:" << this->name << "," << "age:" << this->age << endl;
	}
	nameType name;
	ageType age;
};
void printPerson(Person<string,int>p1)//直接指定参数的类型是最常用的方式
{
	p1.show();
}
//2.参数模板化
template<typename T1,typename T2>
void printPerson2(Person<T1,T2>p2 )
{
	p2.show();
	cout << "T1的数据类型：" << typeid(T1).name() << endl;
	cout << "T2的数据类型：" << typeid(T2).name() << endl;
}
//3.整个数据类型模板化
template<class T>
void printPerson3(T &p3)
{
	p3.show();
	cout << "T的数据类型：" << typeid(T).name() << endl;
}
void test01()
{
	Person<string, int>p("孙悟空", 18);
	printPerson(p);
}
void test02()
{
	Person<string, int>p2("猪八戒", 20);
	printPerson2(p2);
}
void test03()
{
	Person<string, int>p3("唐僧", 30);//写函数的时候不指定，在调用的时候再指定构造函数参数的类型
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}