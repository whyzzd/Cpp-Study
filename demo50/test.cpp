#include<iostream>
using namespace std;
#include<map>
void printMap(map<int,int> m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 20));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(4, 40));
	printMap(m);
	cout << endl;
	//拷贝构造函数
	map<int, int> m1(m);
	printMap(m1);
	cout << endl;
	//赋值
	map<int, int> m2;
	m2 = m1;
	printMap(m2);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}