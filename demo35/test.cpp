#include<iostream>
using namespace std;
#include<string>
//ȫ�ֺ�������ģ�� ����ʵ�ֺ�������ʵ��

template<class T1,class T2>
class Person
{
	//ȫ�ֺ���������ʵ��
	friend void printPerson(Person<T1,T2> p1)
	{
		cout << "������" << p1.m_Name << "���䣺" << p1.m_Age << endl;
	}
	//ȫ�ֺ���������ʵ��
	friend void printPerson2(Person<T1, T2>p2);
public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

//�������ֵ��������� printPerson2��һ����ͨ��ȫ�ֺ���������template֮��ͻ��ɺ���ģ��
template<class T1,class T2>
void printPerson2(Person<T1, T2>p2)
{
	cout << "������" << p1.m_Name << "���䣺" << p1.m_Age << endl;
}
void test01()
{
	Person<string, int>p1("����", 18);
	printPerson(p1);
}

void test02()
{
	Person<string, int>p2("����", 20);
	printPerson(p2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}