#include<iostream>
using namespace std;
#include<map>
void printMap(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}
void test01()
{
	map<int, int>m;
	//插入元素
	//第一种：
	m.insert(pair<int, int>(1, 10));

	//第二种：
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种,不建议使用这种方式，一般是根据key来查找value(存在的情况下)
	m[4] = 40;
	printMap(m);
	cout << endl;

	//删除
	//第一种：
	m.erase(1);
	printMap(m);
	cout << endl;

	//第二种：
	/*m.erase(m.begin(), m.end());
	printMap(m);
	cout << endl;*/

	//第三种：
	m.erase(m.begin());
	printMap(m);
	cout << endl;

	//第四种：
	m.clear();
	printMap(m);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}