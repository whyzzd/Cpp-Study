#include<iostream>
using namespace std;
#include<string>
//���ģ�һ�����������һ�����˽�г�Ա����ʹ��������Ա��һ�������Ԫ����������������friend
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
private:
	Building *building;
};
class Building
{
	friend	class GoodGay;//����friend��Ϊ��Ԫʹ��GoodGay�Ķ���Ҳ�ܹ�����Building��˽�г�Ա
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

GoodGay::GoodGay()//���캯����ʵ���������ڶ��ڿ���һ��Building�Ŀռ䲢������ֵ��GoodGay��ĳ�Ա����ָ��
{
	building = new Building;
}
void GoodGay::visit()//���ʺ�����ʵ�֣���ҪGoodGay������building����
{
	cout << "�ֵ����ڷ��ʣ�" << building->m_SittingRoom<<endl;
	cout << "�ֵ����ڷ��ʣ�" << building->m_BedRoom << endl;
}
Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

void test()
{
	GoodGay gg;
	gg.visit();//�������󣬲����÷��ʺ���
}
int main()
{
	test();//���

	system("pause");
	return 0;
}