#include<iostream>
#include<string>
using namespace std;
//�������������
class MyPrint
{
public:
	
	void operator()(string sss)
	{
	
		cout << sss << endl;
	}
	

};
//�������������ʽû�й̶��ĸ�ʽ
class Add
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test()
{
	MyPrint mp;
	mp("haohaoxuexi ");//ע��ȡ���ں������ã������ǡ�������������������أ��õ��Ƕ�������
}

void test02()
{
	Add add;
	cout << add(1, 5) << endl;
	//Ҳ����ʹ����������ʹ�ã����꼴������
	cout << Add()(5, 6) << endl;
}
int main()
{
	test();
	test02();
	system("pause");
	return 0;
}