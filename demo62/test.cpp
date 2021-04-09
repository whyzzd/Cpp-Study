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

class ReplaceIf
{
public:
	bool operator()(int val)
	{
		return val < 30;
	}
};
//copy�㷨���п���
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	vector<int>v1;
	v1.resize(v.size());
	copy(v.begin(), v.end(), v1.begin());
	for_each(v1.begin(), v1.end(), MyPrint());
}

//���õĿ������滻�㷨 replace
void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 30, 100);
	for_each(v.begin(), v.end(), MyPrint());
}

//���õĿ������滻�㷨 replace_if,�������滻
void test03()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	cout << "�滻��" << endl;
	replace_if(v.begin(), v.end(), ReplaceIf(),100);
	for_each(v.begin(), v.end(), MyPrint());
}
//��������������Ԫ�� swap
void test04()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(10 * i);
	}
	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
	cout << "������" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
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