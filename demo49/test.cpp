#include<iostream>
using namespace std;
#include<set>
#include<string>
//set������ �Զ�����������ָ������

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class myCompare
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{
	set<Person, myCompare>s;
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("�ŷ�", 22);
	Person p4("����", 24);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, myCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}