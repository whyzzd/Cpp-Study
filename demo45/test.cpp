#include<iostream>
using namespace std;
#include<list>

void printList(list<int> l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
}
void test01()
{
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);
	printList(l);

	//使用区间构造
	list<int> l2(l.begin(), l.end());
	printList(l2);

	//使用拷贝构造
	list<int> l3(l2);
	printList(l3);

	//使用n，m赋值
	list<int> l4(5, 100);
	printList(l4);
} 
int main()
{
	test01();
	system("pause");
	return 0;
}