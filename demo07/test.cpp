#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "无参构造函数的调用" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		m_height = new int(height);
		cout << "有参构造函数的调用;"<<endl;
	}
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		m_height = new int(*p.m_height);
	}
	~Person()
	{
		cout << "析构函数的调用；" << endl;
		if (m_height != NULL) 
		{
			delete m_height;
			m_height = NULL;
		}
	}
	int m_Age;
	int *m_height;
};
void test1()
{
	Person p1(18,180);
	cout << "p1的年龄是：" << p1.m_Age << "p1的身高是："<<*p1.m_height<<endl;
	Person p2(p1);
	cout << "p2的年龄是：" << p2.m_Age <<"p2的身高是：" << *p2.m_height << endl;
	//注意事项：p1和p2在函数执行完之后都会调用析构函数对对象进行清理，如果使用的是编译器默认的拷贝构造函数，那么两个对象的m_height所指向的
	//是堆中的同一个空间，第二个对象进行清理时m_height已经没有空间可以指向了，就会发生错误。所以此处应使用深拷贝，即p2会在内存中为height开辟一块空间。
	//释放时，各自释放各自的。
}
int main()
{
	test1();

	system("pause");

	return 0;
}