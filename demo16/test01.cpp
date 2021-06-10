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
//int充当占位，以示与上面的区别，因为函数的返回值并不能作为重载的条件
Person operator++(Person &A,int)
{
	Person temp = A;
	A.a++;
	A.b++;
	return temp;
}
int main01()
{
	//形式一：重载加号运算符(使用全局函数的方式)
	Person A(3, 4),B(2,3);
	//C通过匿名对象进行初始化
	Person T = A + B;
	//T.printAB();

	//形式二:重载减号运算符
	Person T2 = A - B;
	//T2.printAB();

	//重载前置++（全局函数）
	//++A;
	//A.printAB();
	//重载前置--（成员函数）
	//--A;
	//A.printAB();

	//重载后置++
	//A++;
	//A.printAB();
	//重载后置--
	A--;
	A.printAB();
	system("pause");
	return 0;
}
//注意，此处只能使用成员函数的方法重载，因为无法在类A中重载
ostream& operator<<(ostream &out, Person &A)
{
	out << "a的值:" << A.a << "b的值：" << A.b;
	return out;
}
int main02()
{
	//重载<<运算符
	Person A(2, 2);
	cout << A<<"zzzzz";
	system("pause");
	return 0;
}