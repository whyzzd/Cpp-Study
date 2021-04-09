#include<iostream>
using namespace std;
#include<list>
#include<string>
//�Զ����������
class Person
{
public:
	Person(string name,int age,int height,int width)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
		this->m_Width = width;
	}
	string m_Name;
	int m_Age;
	int m_Height;
	int m_Width;
};
void printPerson(list<Person> l)
{
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << " " << it->m_Width << endl;
	}
}

bool comparePerson(Person &p1,Person &p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		if (p1.m_Height == p2.m_Height)
		{
			return p1.m_Width > p2.m_Width;
		}
		else
		{
			return p1.m_Height > p2.m_Height;
		}
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void test01()
{
	list<Person> l;
	Person p1("����", 35, 175, 80);
	Person p2("�ܲ�", 45, 180, 70);
	Person p3("��Ȩ", 40, 175, 60);
	Person p4("����", 25, 190, 50);
	Person p5("�ŷ�", 35, 175, 40);
	Person p6("����", 35, 200, 30);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	//�������
	printPerson(l);

	//�����ݽ�������,ָ���������
	l.sort(comparePerson);
	cout << "�����" << endl;
	printPerson(l);
}
int main()
{
	test01();
	system("pause");
	return 0;
}