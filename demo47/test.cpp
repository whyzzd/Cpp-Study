#include<iostream>
using namespace std;
#include<string>
//pair����Ĵ���
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int>p("����", 20);
	cout << p.first << " " << p.second<<endl;
	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("����",29);
	cout << p2.first << " " << p2.second << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;

}