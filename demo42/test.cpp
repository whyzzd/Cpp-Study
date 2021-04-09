#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
//deque容器的插入和删除、

//打印函数
void printDeque(const deque<int> &de)
{
	for (deque<int>::const_iterator it = de.begin(); it != de.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d;
	//尾插
	d.push_back(10);
	//头插
	d.push_front(100);
	printDeque(d);

	//insert插入
	d.insert(d.begin(),5);
	printDeque(d);
	//以区间的形式插入
	deque<int> d2;
	d2.push_back(77);
	d2.push_back(88);
	d2.push_back(99);
	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);
}
void test02()
{
	//deque容器的删除
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	//使用erase进行删除
	//d.erase(d.begin());
	//printDeque(d);
	/*d.erase(d.begin(), d.end());
	printDeque(d);*/
	//使用clear
	d.clear();
	printDeque(d);
}
void test03()
{
	//访问元素
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	//通过[]方式访问
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i]<<" ";
	}
	cout << endl;
	//通过at方式访问
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;
	//访问第一个元素和最后一个
	cout << d.front() << endl;
	cout << d.back() << endl;
}

void test04()
{
	//排序 默认排序规则 升序
	//对于支持随机放问的迭代器的容器，都可以利用sort算法进行直接排序
	//vector也可以使用sort进行排序
	deque<int>d;
	d.push_back(10);
	d.push_back(30);
	d.push_back(40);
	d.push_back(20);
	cout << "排序前："<<endl;
	printDeque(d);
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	printDeque(d);
}
int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	
	return 0;
}