#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
//容器中类型为对象时
void test01()
{
	vector<Person> v;
	Person p1("aaa", 19);
	Person p2("bbb", 20);
	Person p3("ccc", 21);
	Person p4("ddd", 22);
	Person p5("eee", 23);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << "姓名是：" << iter->m_Name << "年龄：" << iter->m_Age << endl;
	}
}

//容器中的类型为对象的指针时
void test02()
{
	vector<Person*> v;
	Person p1("aaa", 19);
	Person p2("bbb", 20);
	Person p3("ccc", 21);
	Person p4("ddd", 22);
	Person p5("eee", 23);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << "#姓名是：" << (*iter)->m_Name << "年龄：" << (*iter)->m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}