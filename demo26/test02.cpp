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
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));//ע��˴�ǿ��ת���Ĳ���
	cout << "���䣺" << p.m_age << "������" << p.m_name << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}