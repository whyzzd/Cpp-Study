#include<iostream>
using namespace std;

 class Person
 {
 public:

	Person(int m)
	{
		m_Age=new int(m);
	}
	~Person()//������ڶ����濪�ٵĿռ���ô������ִ����֮����Ҫ���ڴ�����ͷţ���������ͨ�ĸ�ֵ֮�󣬲�����ֵ��ָ��Ҳ����֮����
	{		//�ɴ˻�������ͷ��ڴ��ʱ��ָ���ͬһ���ռ䱻�ͷ�������ɳ��������
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//ϵͳ�������ǳ���� ������������ظ�ֵ�������
	Person& operator=(Person &p)
	{
		//���ж��Ƿ�λ��
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);//���ڴ������⿪��һ��ռ䣻
		return p;//����p��Ŀ����Ϊ��������ʽ��̵�˼��
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