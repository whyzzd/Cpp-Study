#include<iostream>
using namespace std;

class Person 
{
	friend ostream& operator<<(ostream &cout, Person &p);//������ֱ�ӷ���˽�г�Ա���ɽ����������
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
ostream& operator<<(ostream &cout ,Person &p)//����operator&����ֵ��ʱ�򣬾Ϳ�����Ϊ��ʽ��̡�cout����ostream����ֻ����һ����&ȡ����ָ���ͬһ���ڴ�ռ䡣
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