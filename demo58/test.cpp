#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//adjacent_find�㷨��ʹ��
void test01()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(1);
	v.push_back(0);
	v.push_back(8);
	v.push_back(8);
	vector<int>::iterator it=adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "û���ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "Ԫ���ǣ�" << *it << endl;
	}
}
//ʹ��binary_search���в��ң�ע�⣺������Ҫһ����������
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret=binary_search(v.begin(), v.end(),8);
	if (ret)
	{
		cout << "�ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "û���ҵ�Ԫ��" << endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}