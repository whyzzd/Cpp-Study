#include<iostream>
using namespace std;
//ʹ��ģ������������н���
template<typename T>
void MySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test()
{
	int a = 10;
	int b = 20;
	//��һ�ַ�ʽ���Զ�ʶ��
	//MySwap(a, b);
	//�ڶ��ַ�ʽ���ֶ�ָ������
	MySwap<int>(a, b);
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}