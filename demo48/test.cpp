#include<iostream>
using namespace std;
#include<set>
class myCompare
{
public:
	bool operator()(int a,int b)
	{
		return a > b;
	}
};
void test01()
{
	set<int>s;
	s.insert(10);
	s.insert(30);
	s.insert(50);
	s.insert(20);
	s.insert(40);
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//使用仿函数，改变排序规则
	set<int, myCompare>s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(50);
	s2.insert(20);
	s2.insert(40);
	for (set<int,myCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}