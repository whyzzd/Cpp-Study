#include<iostream>
using namespace std;
#include<string>
//��ͳ������д��������
class Calculator
{
public:
	int getResult(string s)
	{
		if (s == "+")
		{
			return n_Num1 + n_Num2;
		}
		else if (s == "-")
		{
			return n_Num1 - n_Num2;
		}
		else if (s == "*")
		{
			return n_Num1 * n_Num2;
		}
	}
	int n_Num1;
	int n_Num2;
};
void test01()
{
	Calculator c;
	c.n_Num1 = 10;
	c.n_Num2 = 10;
	cout << "�ӷ���" << c.getResult("+") << endl;
	cout << "������" << c.getResult("-") << endl;
	cout << "�˷���" << c.getResult("*") << endl;
}

//ʹ�ö�̬�ķ�ʽ������д
//��̬��ʹ�ã�
//1.�м̳�
//2.�����ָ��ָ������Ķ���
//3.������д����ĺ���
//��̬ʹ�õĺô���
//1.�������֯�ṹ����
//2.�ɶ���ǿ
//3.������ǰ�ںͺ��ڵ���չ��ά��

class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int n_Num1;
	int n_Num2;
};
class AddCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return n_Num1 + n_Num2;
	}
};

class SubCalculator :public AbstractCalculator
{
	int getResult()
	{
		return n_Num1 - n_Num2;
	}
};

class MulCalculator :public AbstractCalculator
{
	int getResult()
	{
		return n_Num1 * n_Num2;
	}
};
void test02()
{
	AbstractCalculator *cc = new AddCalculator;
	cc->n_Num1 = 10;
	cc->n_Num2 = 10;
	cout << "�ӷ���" << cc->getResult() << endl;
	//���п��ٵ������ֶ��ͷ�
	delete cc;
	cc = new SubCalculator;
	cc->n_Num1 = 10;
	cc->n_Num2 = 10;
	cout << "������" << cc->getResult() << endl;
	delete cc;
	cc = new MulCalculator;
	cc->n_Num1 = 10;
	cc->n_Num2 = 10;
	cout << "�˷���" << cc->getResult() << endl;
	delete cc;
	cc = NULL;
	}
int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
}