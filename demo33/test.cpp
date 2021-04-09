#include<iostream>
using namespace std;
#include<string>
//��ģ���������������
//1.ָ����������
//2.����ģ�廯
//3.������ģ�廯

template<class nameType,class ageType>
class Person
{
public:
	Person(nameType name, ageType age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout<< "name:" << this->name << "," << "age:" << this->age << endl;
	}
	nameType name;
	ageType age;
};
void printPerson(Person<string,int>p1)//ֱ��ָ����������������õķ�ʽ
{
	p1.show();
}
//2.����ģ�廯
template<typename T1,typename T2>
void printPerson2(Person<T1,T2>p2 )
{
	p2.show();
	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
}
//3.������������ģ�廯
template<class T>
void printPerson3(T &p3)
{
	p3.show();
	cout << "T���������ͣ�" << typeid(T).name() << endl;
}
void test01()
{
	Person<string, int>p("�����", 18);
	printPerson(p);
}
void test02()
{
	Person<string, int>p2("��˽�", 20);
	printPerson2(p2);
}
void test03()
{
	Person<string, int>p3("��ɮ", 30);//д������ʱ��ָ�����ڵ��õ�ʱ����ָ�����캯������������
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}