#include<iostream>
using namespace std;
class AbstractDrink
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//制作饮品
	virtual void PutSomething() = 0;
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrink
{
	void Boil()
	{
		cout << "煮开水" << endl;
	}
	void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	void PourInCup()
	{
		cout << "倒入大杯中" << endl;
	}
	void PutSomething()
	{
		cout << "加一些糖" << endl;
	}
};

class Tea :public AbstractDrink
{
	void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	void PourInCup()
	{
		cout << "倒入小杯中" << endl;
	}
	void PutSomething()
	{
		cout << "加一些牛奶" << endl;
	}
};
void Dodrink(AbstractDrink *aa)
{
	aa->MakeDrink();
	delete aa;
}
void test01()
{
	Dodrink(new Tea);
	Dodrink(new Coffee);
}
int main()
{
	test01();
	system("pause");
	return 0;
}