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
	/*测试有参构造
	MyArray <int>ma1(5);
	测试拷贝函数
	MyArray<int>ma2(ma1);
	测试operator=
	MyArray<int>ma3(100);
	ma3 = ma2;*/

	//测试尾插法
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.pushBack(i);
	}
	cout << "arr1打印输出为：" << endl;
	printArr(arr1);
	
	//测试尾删法
	MyArray <int>arr2(arr1);
	arr2.popBack();
	cout << "删除后的结果："<<endl;
	printArr(arr2);
}

//测试自定义的数据类型
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
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 21);
	Person p4("赵六", 22);
	Person p5("朱七", 23);
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3);
	arr.pushBack(p4);
	arr.pushBack(p5);
	printPersonArr(arr);
	cout << "容量：" << arr.getCapacity()<< endl;
	cout << "大小：" << arr.getSize() << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}