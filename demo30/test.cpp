#include<iostream>
using namespace std;
//��ͨ�����뺯��ģ����ù���
//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
//3.����ģ����Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
void myPrint(int a,int b)
{
	cout << "������ͨ�ĺ���" << endl;
}

template<class T>
void myPrint(T a,T b)
{
	cout << "���õ�ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	//myPrint(a,b);

	//ͨ����ģ������б����
	//myPrint<>(a, b);

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'c';
	myPrint(c1, c2);
}
int main()
{
	test01();
	system("pause");
	return 0; 
}