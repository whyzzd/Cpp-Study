#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>//要是用内建函数对象，需要包含这个
//内建仿函数 关系仿函数
//大于 greater
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
	//使用内建函数对象
	sort(v.begin(),v.end(), greater<int>());
	printVector(v);
}
//利用逻辑非 将容器v1搬到v2容器当中并取反
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
	//先要将v2的大小指定
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