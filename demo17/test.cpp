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
//���ÿ�����Ա��ʾ���߲鿴����ģ��
//��ת�̷� F:
//��cd������·��
//ʹ��dir�鿴Ŀ¼
//�����cl /d1 reportSingleClassLayout���� �ļ���
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