#include<iostream>
using namespace std;

 class Person
 {
 public:

	Person(int m)
	{
		m_Age=new int(m);
	}
	~Person()//如果是在堆里面开辟的空间那么当函数执行完之后需要将内存进行释放；当进行普通的赋值之后，不仅是值，指针也会随之复制
	{		//由此会造成在释放内存的时候，指向的同一个空间被释放两次造成程序崩掉；
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//系统里面的是浅拷贝 解决方案；重载赋值运算符；
	Person& operator=(Person &p)
	{
		//先判断是否位空
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);//在内存中另外开辟一块空间；
		return p;//返回p的目的是为了体现链式编程的思想
	}
	 int *m_Age;
 };
 void test01()
 {
	 Person m1(18);
	 Person m2(19);
	 Person m3(20);
	 m1 = m2 = m3;

	 cout << *m1.m_Age << endl;
	 cout << *m2.m_Age << endl;
	 cout << *m3.m_Age << endl;
 }
int main()
{
	test01();
	system("pause");
		return 0;

}