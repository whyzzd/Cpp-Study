#include<iostream>
using namespace std;
#include<map>
void printMap(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}
void test01()
{
	map<int, int>m;
	//����Ԫ��
	//��һ�֣�
	m.insert(pair<int, int>(1, 10));

	//�ڶ��֣�
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������,������ʹ�����ַ�ʽ��һ���Ǹ���key������value(���ڵ������)
	m[4] = 40;
	printMap(m);
	cout << endl;

	//ɾ��
	//��һ�֣�
	m.erase(1);
	printMap(m);
	cout << endl;

	//�ڶ��֣�
	/*m.erase(m.begin(), m.end());
	printMap(m);
	cout << endl;*/

	//�����֣�
	m.erase(m.begin());
	printMap(m);
	cout << endl;

	//�����֣�
	m.clear();
	printMap(m);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}