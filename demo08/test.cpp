#include<iostream>
using namespace std;
class Person 
{
public:
	Person(int a,int b,int c) :m_height(a), m_wid(b), m_age(c)//�������ĺô��ǲ�����ȥ������ȥд��ֵ���
	{

	}

	int m_age;
	int m_wid;
	int m_height;

};
void test1()
{
	Person p(1,3,4);
	cout << "���䣺" <<p.m_age << endl;
	cout << "��" << p.m_wid << endl;
	cout << "�ߣ�" << p.m_height << endl;
}
int main()
{
	test1();
	system("pause");
	return 0;
}