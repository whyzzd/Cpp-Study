#include<iostream>
using namespace std;
class AbstractDrink
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//������Ʒ
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
		cout << "��ˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	void PourInCup()
	{
		cout << "�������" << endl;
	}
	void PutSomething()
	{
		cout << "��һЩ��" << endl;
	}
};

class Tea :public AbstractDrink
{
	void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	void PourInCup()
	{
		cout << "����С����" << endl;
	}
	void PutSomething()
	{
		cout << "��һЩţ��" << endl;
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