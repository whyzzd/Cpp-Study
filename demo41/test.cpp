#include<iostream>
using namespace std;
#include<vector>
void test01()
{
	//Ԥ���ռ䣬ʹ��reserve
	vector<int> v;
	int num=0;
	int *p=NULL;
	v.reserve(10000);
	//��Ϊ�ڴ��ȥ10000�������У�Ҫ��ͣ�����·���ռ�
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