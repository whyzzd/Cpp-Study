#include<iostream>
using namespace std;
class Person
{
public:
	void chang() const
	{
		m_b = 3;
		cout << "����������" << endl;
		
	}
	void  putong()
	{
		m_b = 3;
		cout << "��ͨ��������" << endl;
	}
	int m_a;
	mutable int m_b;//��Ա��������mutable֮�󳣺����ͳ�������Զ��������޸�����
};

void test()
{
	const Person p;//������ֻ�ܵ��ó�������������mutable�ı���
	p.chang();
	p.m_b=23;

}
int main()
{
	test();
	system("pause");
	return  0;
}