#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		m_height = new int(height);
		cout << "�вι��캯���ĵ���;"<<endl;
	}
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		m_height = new int(*p.m_height);
	}
	~Person()
	{
		cout << "���������ĵ��ã�" << endl;
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
	cout << "p1�������ǣ�" << p1.m_Age << "p1������ǣ�"<<*p1.m_height<<endl;
	Person p2(p1);
	cout << "p2�������ǣ�" << p2.m_Age <<"p2������ǣ�" << *p2.m_height << endl;
	//ע�����p1��p2�ں���ִ����֮�󶼻�������������Զ�������������ʹ�õ��Ǳ�����Ĭ�ϵĿ������캯������ô���������m_height��ָ���
	//�Ƕ��е�ͬһ���ռ䣬�ڶ��������������ʱm_height�Ѿ�û�пռ����ָ���ˣ��ͻᷢ���������Դ˴�Ӧʹ���������p2�����ڴ���Ϊheight����һ��ռ䡣
	//�ͷ�ʱ�������ͷŸ��Եġ�
}
int main()
{
	test1();

	system("pause");

	return 0;
}