#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
//deque�����Ĳ����ɾ����

//��ӡ����
void printDeque(const deque<int> &de)
{
	for (deque<int>::const_iterator it = de.begin(); it != de.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d;
	//β��
	d.push_back(10);
	//ͷ��
	d.push_front(100);
	printDeque(d);

	//insert����
	d.insert(d.begin(),5);
	printDeque(d);
	//���������ʽ����
	deque<int> d2;
	d2.push_back(77);
	d2.push_back(88);
	d2.push_back(99);
	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);
}
void test02()
{
	//deque������ɾ��
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	//ʹ��erase����ɾ��
	//d.erase(d.begin());
	//printDeque(d);
	/*d.erase(d.begin(), d.end());
	printDeque(d);*/
	//ʹ��clear
	d.clear();
	printDeque(d);
}
void test03()
{
	//����Ԫ��
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	//ͨ��[]��ʽ����
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i]<<" ";
	}
	cout << endl;
	//ͨ��at��ʽ����
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;
	//���ʵ�һ��Ԫ�غ����һ��
	cout << d.front() << endl;
	cout << d.back() << endl;
}

void test04()
{
	//���� Ĭ��������� ����
	//����֧��������ʵĵ�����������������������sort�㷨����ֱ������
	//vectorҲ����ʹ��sort��������
	deque<int>d;
	d.push_back(10);
	d.push_back(30);
	d.push_back(40);
	d.push_back(20);
	cout << "����ǰ��"<<endl;
	printDeque(d);
	sort(d.begin(), d.end());
	cout << "�����" << endl;
	printDeque(d);
}
int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	
	return 0;
}