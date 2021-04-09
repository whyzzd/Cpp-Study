#include<iostream>
using namespace std;
class Person 
{
public:
	Person(int a,int b,int c) :m_height(a), m_wid(b), m_age(c)//这样做的好处是不用再去在里面去写赋值语句
	{

	}

	int m_age;
	int m_wid;
	int m_height;

};
void test1()
{
	Person p(1,3,4);
	cout << "年龄：" <<p.m_age << endl;
	cout << "宽：" << p.m_wid << endl;
	cout << "高：" << p.m_height << endl;
}
int main()
{
	test1();
	system("pause");
	return 0;
}