#include<iostream>
using namespace std;
#include"MyArray.hpp"
#include<string>
void printArr(MyArray <int> arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i]<<endl;
	}
}
void test01()
{
	/*�����вι���
	MyArray <int>ma1(5);
	���Կ�������
	MyArray<int>ma2(ma1);
	����operator=
	MyArray<int>ma3(100);
	ma3 = ma2;*/

	//����β�巨
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.pushBack(i);
	}
	cout << "arr1��ӡ���Ϊ��" << endl;
	printArr(arr1);
	
	//����βɾ��
	MyArray <int>arr2(arr1);
	arr2.popBack();
	cout << "ɾ����Ľ����"<<endl;
	printArr(arr2);
}

//�����Զ������������
class Person
{
public:
	Person()
	{}
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPersonArr(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_Name << " " << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person>arr(5);
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 21);
	Person p4("����", 22);
	Person p5("����", 23);
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3);
	arr.pushBack(p4);
	arr.pushBack(p5);
	printPersonArr(arr);
	cout << "������" << arr.getCapacity()<< endl;
	cout << "��С��" << arr.getSize() << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}