#include<iostream>
using namespace std;
#include<fstream>
class Person
{
public:
	int m_age;
	char m_name[64];//ʹ��c++��string�����һЩ����
};
void test01()
{
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);//Ҳ����ʹ��ofs�Ĺ��캯�����и�ֵ
	Person p = { 1,"����" };//���ʣ����ָ�ֵ��ʽ��ʵ����ʲô��
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return  0;

}