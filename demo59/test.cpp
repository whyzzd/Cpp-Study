#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
//利用count来统计个数
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
	Person p1("关羽", 19);
	Person p2("赵云", 34);
	Person p3("马超", 23);
	Person p4("刘备", 35);
	Person p5("张飞", 34);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("曹操",34);
	int countP=count(v.begin(), v.end(), p);
	cout << "与曹操的个数一致的是：" << countP << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}