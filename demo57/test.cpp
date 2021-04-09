#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
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
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
class Find_IfInt
{
public:
	bool operator()(int val)
	{
		return val > 40;
	}
};
class Find_IfPerson
{
public:
	bool operator()(Person &p)
	{
		return p.m_Age > 30;
	}
};
//ʹ��find_if����������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	vector<int>::iterator it=find_if(v.begin(), v.end(), Find_IfInt());
	if (it == v.end())
	{
		cout << "�Ҳ���" << endl;
	}
	else
	{
		cout << *it << endl;
	}

}

//ʹ��find_if�����Զ�����������
void test02()
{
	vector<Person>v;
	Person p1("�����", 18);
	Person p2("��˽�", 28);
	Person p3("ɳɮ", 38);
	Person p4("��ɮ", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it=find_if(v.begin(), v.end(), Find_IfPerson());
	if (it == v.end())
	{
		cout << "�Ҳ���" << endl;
	}
	else
	{
		cout << "name:" << it->m_Name << " " << "age:" << it->m_Age << endl;
	}
}

//ʹ��find���������Զ�����������
void test03()
{
	vector<Person>v;
	Person p1("�����", 18);
	Person p2("��˽�", 28);
	Person p3("ɳɮ", 38);
	Person p4("��ɮ", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p5("��ɮ", 48);
	vector<Person>::iterator it=find(v.begin(), v.end(), p5);
	if (it == v.end())
	{
		cout << "�Ҳ���Person" << endl;
	}
	else
	{
		cout <<"���ҵ���"<< it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}