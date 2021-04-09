#include<iostream>
using namespace std;
#include<fstream>
class Person
{
public:
	int m_age;
	char m_name[64];
};

void test01()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));//注意此处强制转换的参数
	cout << "年龄：" << p.m_age << "姓名：" << p.m_name << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}