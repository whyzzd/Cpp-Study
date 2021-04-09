#include<iostream>
using namespace std;
//菱形继承出现的问题是：会产生二义性，所访问的变量只想让它是唯一一个，解决方案可以是使用virtual关键字使得子类产生一个指向基类的指针，让值始终只有一个
class animal
{
public:
	int n_Num;
};
class Sheep :virtual public animal
{

};
class Tuo :virtual  public animal
{

};
class St:public Sheep,public Tuo 
{};
void test01()
{
	St st;
	st.Sheep::n_Num = 100;
	st.Tuo::n_Num = 200;
	cout << "Sheep::n_Num为：" << st.Sheep::n_Num<<endl;
	cout << "Tuo::n_Num为：" << st.Tuo::n_Num << endl;
	cout << st.n_Num << endl;
}
//查看类的模型的方法：
//打开开发人员命令提示工具
//使用cd进入对应的文件目录，可使用dir查看对应的文件目录
//使用命令：cl /d1 reportSingleClassLayout类名 文件名
//使用virtual关键字和不使用关键字是有一定区别的
int main()
{
	test01();
	system("pause");
	return 0;
}