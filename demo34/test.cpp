#include<iostream>
using namespace std;

//���ڼ̳е�����ģ���һЩ����

template<class T>
class Base
{
public:
	T tt;
};

template<class T1,class T2>
class Son :public Base<T2>//�̳�ģ��ʱ����Ҫָ�������в���ģ�����ͣ����߼���дģ��
{
public:
	Son()
	{
		cout << "T1�����ͣ�"<<typeid(T1).name() << endl;
		cout << "T2�����ͣ�" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test01()
{
	Son<int, char>son;
}
int main()
{
	test01();
	system("pause");
	return 0;
}