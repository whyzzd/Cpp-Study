#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printVector(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator iterBgn = v.begin();
	vector<int>::iterator iterEnd = v.end();
	//��һ�������ʽ,ʹ��while
	/*while (iterBgn != iterEnd)
	{
		cout << *iterBgn << endl;
		iterBgn++;
	}*/

	//�ڶ��������ʽ��ʹ��for
	/*for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	//�����������ʽ��ʹ���㷨for_each,ʹ�ûص�����
	for_each(iterBgn, iterEnd, printVector);
}
int main()
{
	test01();
	system("pause");
	return 0;
}