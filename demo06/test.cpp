#include<iostream>
using namespace std;
class Person
{
public:
	Person() {
		cout << "�޲ι��캯����������" << endl;
	}
	Person(int a)
	{
		cout << "���캯����������" << endl;
	}
	~Person()
	{
		cout << "person�����������ĵ��ã���" << endl;
	}
};

int main()
{
	Person p;
	system("pause");
	return 0;
}