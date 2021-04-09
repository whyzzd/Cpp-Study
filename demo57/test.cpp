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
//使用find_if查找内置数据类型
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
		cout << "找不到" << endl;
	}
	else
	{
		cout << *it << endl;
	}

}

//使用find_if查找自定义数据类型
void test02()
{
	vector<Person>v;
	Person p1("孙悟空", 18);
	Person p2("猪八戒", 28);
	Person p3("沙僧", 38);
	Person p4("唐僧", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it=find_if(v.begin(), v.end(), Find_IfPerson());
	if (it == v.end())
	{
		cout << "找不到" << endl;
	}
	else
	{
		cout << "name:" << it->m_Name << " " << "age:" << it->m_Age << endl;
	}
}

//使用find函数查找自定义数据类型
void test03()
{
	vector<Person>v;
	Person p1("孙悟空", 18);
	Person p2("猪八戒", 28);
	Person p3("沙僧", 38);
	Person p4("唐僧", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p5("唐僧", 48);
	vector<Person>::iterator it=find(v.begin(), v.end(), p5);
	if (it == v.end())
	{
		cout << "找不到Person" << endl;
	}
	else
	{
		cout <<"已找到："<< it->m_Name << " " << it->m_Age << endl;
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