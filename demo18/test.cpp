#include<iostream>
using namespace std;
class Base
{
public:
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
};
int Son::m_A = 200;
void test01()
{
	
	//ͨ���������������ʳ�Ա
	Son s;
	cout << "s.m_A->"<<s.m_A << endl;
	cout << "s.Base::m_A->"<<s.Base::m_A << endl;
	//ͨ�����������ʳ�Ա����,�������г������븸������ͬ�ĳ�Ա�������ߺ�������Ḳ�Ǹ������е�
	cout << "Son::m_A->"<<Son:: m_A << endl;
	cout << "Son::Base::m_A->"<<Son::Base::m_A<<endl;

	//��Ա���������ڶ���
}
int main()
{
	test01();
	system("pause");
	return 0;
}