#include<iostream>
using namespace std;
//���μ̳г��ֵ������ǣ�����������ԣ������ʵı���ֻ��������Ψһһ�����������������ʹ��virtual�ؼ���ʹ���������һ��ָ������ָ�룬��ֵʼ��ֻ��һ��
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
	cout << "Sheep::n_NumΪ��" << st.Sheep::n_Num<<endl;
	cout << "Tuo::n_NumΪ��" << st.Tuo::n_Num << endl;
	cout << st.n_Num << endl;
}
//�鿴���ģ�͵ķ�����
//�򿪿�����Ա������ʾ����
//ʹ��cd�����Ӧ���ļ�Ŀ¼����ʹ��dir�鿴��Ӧ���ļ�Ŀ¼
//ʹ�����cl /d1 reportSingleClassLayout���� �ļ���
//ʹ��virtual�ؼ��ֺͲ�ʹ�ùؼ�������һ�������
int main()
{
	test01();
	system("pause");
	return 0;
}