#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	ofs.close();
}
void test02()
{
	//�����ļ�����
	ifstream ifs;
	//ȷ���ļ��򿪵ķ�ʽ
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "��ʧ��"<<endl;
		return;
	}
	//���ķ�ʽ
	//��һ�ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/
	//�ڶ��ַ�ʽ
	char buf[1024] = {0};
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf<<endl  ;
	}
	//�����ַ�ʽ
	//string buf;
	//while (getline(ifs,buf))//��Ҫ����string����ʹ���������
	//{
	//	cout << buf << endl;
	//}
	//�����ַ�ʽ
	//char c;
	//while ((c = ifs.get()) != EOF)//ȫ����end of line
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