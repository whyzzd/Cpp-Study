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
//����������Ϊ����ʱ
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
		cout << "�����ǣ�" << iter->m_Name << "���䣺" << iter->m_Age << endl;
	}
}

//�����е�����Ϊ�����ָ��ʱ
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
		cout << "#�����ǣ�" << (*iter)->m_Name << "���䣺" << (*iter)->m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}