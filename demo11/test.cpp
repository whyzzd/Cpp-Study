#include<iostream>
using namespace std;
#include<string>
//核心：一个类想访问另一个类的私有成员，可使得这个类成员另一个类的友元，在其内声明加上friend
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
	friend	class GoodGay;//加上friend成为友元使得GoodGay的对象也能够访问Building的私有成员
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

GoodGay::GoodGay()//构造函数的实现内容是在堆内开辟一个Building的空间并将他赋值给GoodGay类的成员对象指针
{
	building = new Building;
}
void GoodGay::visit()//访问函数的实现：需要GoodGay类中有building对象
{
	cout << "兄弟正在访问：" << building->m_SittingRoom<<endl;
	cout << "兄弟正在访问：" << building->m_BedRoom << endl;
}
Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

void test()
{
	GoodGay gg;
	gg.visit();//创建对象，并调用访问函数
}
int main()
{
	test();//入口

	system("pause");
	return 0;
}