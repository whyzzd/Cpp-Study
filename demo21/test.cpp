#include<iostream>
using namespace std;
#include<string>
//传统方法书写计算器：
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
	cout << "加法：" << c.getResult("+") << endl;
	cout << "减法：" << c.getResult("-") << endl;
	cout << "乘法：" << c.getResult("*") << endl;
}

//使用多态的方式进行书写
//多态的使用：
//1.有继承
//2.父类的指针指向子类的对象
//3.子类重写父类的函数
//多态使用的好处：
//1.代码的组织结构清晰
//2.可读性强
//3.有利于前期和后期的扩展和维护

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
	cout << "加法：" << cc->getResult() << endl;
	//堆中开辟的数据手动释放
	delete cc;
	cc = new SubCalculator;
	cc->n_Num1 = 10;
	cc->n_Num2 = 10;
	cout << "减法：" << cc->getResult() << endl;
	delete cc;
	cc = new MulCalculator;
	cc->n_Num1 = 10;
	cc->n_Num2 = 10;
	cout << "乘法：" << cc->getResult() << endl;
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