#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
}
//定义的是一种规则
class GreaterFour
{
public:
	bool operator()(int val)
	{
		return val > 40;
	}
};

//定义排序规则
class MyCompare 
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};

//利用全局函数指定规则
bool myCompare(int val1, int val2)
{
	return val1 > val2;
}
//一元谓词
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	//printVector(v);
	//一元谓词的使用,谓词的意思是指仿函数中的返回值是bool型的，一元是指参数只有一个
	//找出容器当中大于40的数
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFour());//这里的greatFour是匿名函数对象
	if(it!=v.end())
	{ 
		cout << *it << endl;
	}
	else
	{
		cout << "未找到大于40的数" << endl;
	}
	
}

//二元谓词
void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	//默认的排序
	sort(v.begin(), v.end());
	printVector(v);

	//利用仿函数进行倒序排序
	/*MyCompare mc;
	sort(v.begin(), v.end(), mc);*///也可以使用匿名函数对象作为参数


	//利用全局函数指定规则
	sort(v.begin(), v.end(), myCompare);
	cout << "-------------------------" << endl;
	printVector(v);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}