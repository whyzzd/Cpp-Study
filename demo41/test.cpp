#include<iostream>
using namespace std;
#include<vector>
void test01()
{
	//预留空间，使用reserve
	vector<int> v;
	int num=0;
	int *p=NULL;
	v.reserve(10000);
	//因为在存进去10000个数当中，要不停的重新分配空间
	for (int i=0; i < 10000; i++)
	{
		v.push_back(i + 1);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num:" << num<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}