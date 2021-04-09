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

class MyTransform
{
public:
	int operator()(int val)
	{
		return val+1;
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//使用for_each进行遍历
	for_each(v.begin(), v.end(), MyPrint());
	cout << "-----------------------------------------" << endl;;
	//使用transform对容器进行搬运
	vector<int> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), MyTransform());
	for_each(v2.begin(), v2.end(), MyPrint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}