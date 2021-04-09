#include<iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :protected Base
{
public:
	int m_D;
};
//利用开发人员提示工具查看对象模型
//跳转盘符 F:
//用cd到具体路径
//使用dir查看目录
//敲命令：cl /d1 reportSingleClassLayout类名 文件名
void test01()
{
	cout << sizeof(Son);
}
int main()
{
	test01();
	system("pause");
	return 0;
}