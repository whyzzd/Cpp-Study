#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>//Ҫ�����ڽ�����������Ҫ�������
//�ڽ��º��� ��ϵ�º���
//���� greater
void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	sort(v.begin(), v.end());
	printVector(v);
	cout << "--------------------" << endl;
	//ʹ���ڽ���������
	sort(v.begin(),v.end(), greater<int>());
	printVector(v);
}
//�����߼��� ������v1�ᵽv2�������в�ȡ��
void test02()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "--------------------------------" << endl;
	vector<bool> v2;
	//��Ҫ��v2�Ĵ�Сָ��
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}