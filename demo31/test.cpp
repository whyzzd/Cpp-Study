#include<iostream>
using namespace std;
#include<string>
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}
	void myShow()
	{
		cout << "name:" << this->name <<","<< "age:" << this->age;
	}
	NameType name;
	AgeType age;
};
void test01()
{
	Person<string, int> p("уехЩ", 18);
	p.myShow();
}
int main()
{
	test01();
	system("pause");
	return 0;
}