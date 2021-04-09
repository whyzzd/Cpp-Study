#include<iostream>
using namespace std;
//使用模板对两个数进行交换
template<typename T>
void MySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test()
{
	int a = 10;
	int b = 20;
	//第一种方式，自动识别
	//MySwap(a, b);
	//第二种方式，手动指定类型
	MySwap<int>(a, b);
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}