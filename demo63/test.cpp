#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//���õ����������㷨 accumulate
void test01()
{
	vector<int>v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	int ret=accumulate(v.begin(), v.end(), 100);
	cout << ret << endl;
}
//�����������ָ����ֵ fill
void test02()
{
	vector<int>v;
	v.resize(10);
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint());
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}