#include<iostream>
using namespace std;
#include<fstream>
class Person
{
public:
	int m_age;
	char m_name[64];//使用c++的string会出现一些问题
};
void test01()
{
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);//也可以使用ofs的构造函数进行赋值
	Person p = { 1,"张三" };//疑问：此种赋值方式的实质是什么？
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return  0;

}