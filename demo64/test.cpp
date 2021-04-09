#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//���õļ����㷨 set_intersection ����
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//���ٴ�Ž��������
	vector<int>v0;
	v0.resize(min(v1.size(), v2.size()));

	//ע�⣺���ص�ֵ�������������һ��Ԫ�ص�λ��,������Ҫ����������
	vector<int>::iterator it_end=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());

	for_each(v0.begin(), it_end, MyPrint());
}
//�����ļ����㷨 set_union
void test02()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//�����µ�����
	vector<int> v0;
	v0.resize(v1.size()+ v2.size());

	vector<int>::iterator it_end=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());

	for_each(v0.begin(), it_end, MyPrint());
}
//�����ļ����㷨 � set_difference
void test03()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//v1��v2�����Ĳ
	vector<int>v12;
	v12.resize(v1.size());
	vector<int>::iterator it12=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v12.begin());
	for_each(v12.begin(), it12, MyPrint());
	cout << endl;
	cout << "------------------------------------" << endl;
	//v2��v1�����Ĳ
	vector<int>v21;
	v21.resize(v2.size());
	vector<int>::iterator it21=set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v21.begin());
	for_each(v21.begin(), it21, MyPrint());
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}