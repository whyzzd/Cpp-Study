#include<iostream>
using namespace std;
#include<string>
//pair对组的创建
void test01()
{
	//第一种方式
	pair<string, int>p("张三", 20);
	cout << p.first << " " << p.second<<endl;
	//第二种方式
	pair<string, int>p2 = make_pair("李四",29);
	cout << p2.first << " " << p2.second << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;

}