#include<iostream>
using namespace std;

class Person 
{
	friend ostream& operator<<(ostream &cout, Person &p);//对象不能直接访问私有成员，可将它变成朋友
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};
ostream& operator<<(ostream &cout ,Person &p)//加了operator&返回值的时候，就可以作为链式编程。cout属于ostream对象，只能有一个，&取别名指向的同一块内存空间。
{
	cout << "a:" << p.m_A << "b:" << p.m_B << endl;
	return cout;
}
void test01()
{
	Person p(10, 20);
	cout << p << endl ;
}
int main()
{
	test01();
	system("pause");
	return 0;
}