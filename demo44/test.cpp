#include<iostream>
using namespace std;
#include<stack>
void test01()
{
	stack<int>s;
	int a = 0;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.size();
	while (!s.empty())
	{
		
		cout << "ջ��Ԫ���ǣ�" << s.top() << endl;
		s.pop();
		a++;
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}