#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger &m);
public:
	MyInteger()
	{
		m_Num=0;
	}
	//ǰ���������
	MyInteger& operator++()//����++�����������MyInteger&�� ��ΪҪ++����Ҫ���ã�&����Ϊ��ͷ��β����ͬһ���������
	{
		m_Num++;
		return *this;
	}
	//���غ���++�������ע�⣺���õ������ص�һ����ֵ����Ϊ�ں����������֮�󣬶���Ҳ����֮�ͷţ�
	MyInteger operator++(int)
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}
private:
	int m_Num;//�������ص�������ͬһ�������򣬺�����һ����������һ������������һ�������Ͳ�һ����˳��һ��
	
};
ostream& operator<<(ostream &cout, MyInteger &m)//<<�����Ҳ��Ҫ����
{
	cout << m.m_Num;
	return cout;
}

void test01()
{
	MyInteger m;

	cout << ++(++m) << endl;
	cout <<m<< endl;
}

void test02()
{
	MyInteger m1;
	cout << m1++ << endl;
	cout << m1 << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}