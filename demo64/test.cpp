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
//常用的集合算法 set_intersection 交集
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//开辟存放结果的容器
	vector<int>v0;
	v0.resize(min(v1.size(), v2.size()));

	//注意：返回的值是新容器的最后一个元素的位置,两容器要是有序序列
	vector<int>::iterator it_end=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());

	for_each(v0.begin(), it_end, MyPrint());
}
//常见的集合算法 set_union
void test02()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//开辟新的容器
	vector<int> v0;
	v0.resize(v1.size()+ v2.size());

	vector<int>::iterator it_end=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());

	for_each(v0.begin(), it_end, MyPrint());
}
//常见的集合算法 差集 set_difference
void test03()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//v1和v2容器的差集
	vector<int>v12;
	v12.resize(v1.size());
	vector<int>::iterator it12=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v12.begin());
	for_each(v12.begin(), it12, MyPrint());
	cout << endl;
	cout << "------------------------------------" << endl;
	//v2和v1容器的差集
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