#include<iostream>
using namespace std;
class Animal 
{
public:
	void virtual Speak()
	{
		cout << "�����ڽС�" << endl; 
	}
};
//����ǵ�ַ��󶨵Ļ�����ô�ڵ���dospeak����ʱ�����Ȱ󶨵���animal�࣬���۴����ʱʲô������һֱ��animal��
//Ҫ������������ô����ʱ�����Խ�Animal���еĺ�������麯������virtual�ؼ���
class Dog:public Animal
{
public:
	void Speak()
	{
		cout << "���ڽС�" << endl;
	}
};

class Cat:public Animal
{
public:
	void Speak()//�����ຯ���е�Virtual��д�ɲ�д
	{
		cout << "è�ڽС�" << endl;
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
//��̬�����������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ�ã������ָ���������ָ������Ķ���
int main()
{
	test01();
	system("pause");
	return 0;
}