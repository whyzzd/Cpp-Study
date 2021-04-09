#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//使用merge将两个容器进行合并,注意：两个容器必须是有序的才行,同时为升序或者同时为降序
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	vector<int>v0;
	v0.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v0.begin());
	for_each(v0.begin(), v0.end(), MyPrint());
}

//排序算法 reverse,反转
void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << "反转后：" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}