#include<iostream>
using namespace std;
class Person
{
public:
	Person(int a,int b)
	{
		this->a = a;
		this->b = b;
	}
	~Person()
	{
	}
	void printAB()
	{
		cout << "a:" << a << "  b:" << b;
	}
	Person operator-( Person &B)
	{
		Person temp(this->a - B.a, this->b - B.b);
		return temp;
	}
	Person& operator--()
	{
		this->a--;
		this->b--;
		return *this;
	}
	Person operator--(int)
	{
		Person temp = *this;
		this->a--;
		this->b--;
		return temp;
	}

	

	
protected:

private:
	friend Person operator+(Person &A, Person &B);
	friend Person &operator++(Person &A);
	friend Person operator++(Person &A ,int);
	friend ostream& operator<<(ostream &out, Person &A);
	int a;
	int b;

};
Person operator+(Person &A, Person &B)
{
	Person temp(A.a + B.a, A.b + B.b);
	return temp;
}

Person& operator++(Person &A)
{
	A.a++;
	A.b++;
	return A;
}
//int�䵱ռλ����ʾ�������������Ϊ�����ķ���ֵ��������Ϊ���ص�����
Person operator++(Person &A,int)
{
	Person temp = A;
	A.a++;
	A.b++;
	return temp;
}
int main01()
{
	//��ʽһ�����ؼӺ������(ʹ��ȫ�ֺ����ķ�ʽ)
	Person A(3, 4),B(2,3);
	//Cͨ������������г�ʼ��
	Person T = A + B;
	//T.printAB();

	//��ʽ��:���ؼ��������
	Person T2 = A - B;
	//T2.printAB();

	//����ǰ��++��ȫ�ֺ�����
	//++A;
	//A.printAB();
	//����ǰ��--����Ա������
	//--A;
	//A.printAB();

	//���غ���++
	//A++;
	//A.printAB();
	//���غ���--
	A--;
	A.printAB();
	system("pause");
	return 0;
}
//ע�⣬�˴�ֻ��ʹ�ó�Ա�����ķ������أ���Ϊ�޷�����A������
ostream& operator<<(ostream &out, Person &A)
{
	out << "a��ֵ:" << A.a << "b��ֵ��" << A.b;
	return out;
}
int main02()
{
	//����<<�����
	Person A(2, 2);
	cout << A<<"zzzzz";
	system("pause");
	return 0;
}