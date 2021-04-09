#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printVector(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator iterBgn = v.begin();
	vector<int>::iterator iterEnd = v.end();
	//第一种输出方式,使用while
	/*while (iterBgn != iterEnd)
	{
		cout << *iterBgn << endl;
		iterBgn++;
	}*/

	//第二种输出方式，使用for
	/*for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	//第三种输出方式，使用算法for_each,使用回调函数
	for_each(iterBgn, iterEnd, printVector);
}
int main()
{
	test01();
	system("pause");
	return 0;
}