#include<iostream>
using namespace std;
class Animal 
{
public:
	void virtual Speak()
	{
		cout << "动物在叫。" << endl; 
	}
};
//如果是地址早绑定的话，那么在调用dospeak函数时，就先绑定的是animal类，无论传入的时什么参数都一直是animal类
//要解决这个问题那么可以时将可以将Animal类中的函数变成虚函数加上virtual关键字
class Dog:public Animal
{
public:
	void Speak()
	{
		cout << "狗在叫。" << endl;
	}
};

class Cat:public Animal
{
public:
	void Speak()//在子类函数中的Virtual可写可不写
	{
		cout << "猫在叫。" << endl;
	}
};
void doSpeak(Animal &a)
{
	a.Speak();
}
void test01()
{
	Cat c;
	Dog d;
	doSpeak(c);
	doSpeak(d);
}
//多态满足的条件：
//1，有继承关系
//2，子类重写父类的虚函数

//动态多态使用：父类的指针或者引用指向子类的对象
int main()
{
	test01();
	system("pause");
	return 0;
}