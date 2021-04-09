#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//adjacent_find算法的使用
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
		cout << "没有找到相邻重复元素" << endl;
	}
	else
	{
		cout << "元素是：" << *it << endl;
	}
}
//使用binary_search进行查找，注意：必须是要一个有序序列
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
		cout << "找到了元素" << endl;
	}
	else
	{
		cout << "没有找到元素" << endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}