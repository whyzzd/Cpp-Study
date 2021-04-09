#include<iostream>
using namespace std;
class Person
{
public:
	Person() {
		cout << "无参构造函数！！！！" << endl;
	}
	Person(int a)
	{
		cout << "构造函数！！！！" << endl;
	}
	~Person()
	{
		cout << "person的析构函数的调用！！" << endl;
	}
};

int main()
{
	Person p;
	system("pause");
	return 0;
}