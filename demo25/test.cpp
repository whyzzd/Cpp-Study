#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	ofs.close();
}
void test02()
{
	//创建文件对象
	ifstream ifs;
	//确定文件打开的方式
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开失败"<<endl;
		return;
	}
	//读的方式
	//第一种方式
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/
	//第二种方式
	char buf[1024] = {0};
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf<<endl  ;
	}
	//第三种方式
	//string buf;
	//while (getline(ifs,buf))//需要包含string才能使用这个函数
	//{
	//	cout << buf << endl;
	//}
	//第四种方式
	//char c;
	//while ((c = ifs.get()) != EOF)//全程是end of line
	//{
	//	cout << c;
	//}
	ifs.close();
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}