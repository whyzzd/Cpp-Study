#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
//����count��ͳ�Ƹ���
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person &p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
void test01()
{
	vector<Person>v;
	Person p1("����", 19);
	Person p2("����", 34);
	Person p3("��", 23);
	Person p4("����", 35);
	Person p5("�ŷ�", 34);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�ܲ�",34);
	int countP=count(v.begin(), v.end(), p);
	cout << "��ܲٵĸ���һ�µ��ǣ�" << countP << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}