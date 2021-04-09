#include<iostream>
using namespace std;
#include<vector>
void printVector(vector<int> &v0)
{
	for (vector<int>::iterator it = v0.begin(); it != v0.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
	}
	printVector(v1);

	//���ø�ֵ��=���и�ֵ
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//����assign(begin,end)���и�ֵ
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	//����assign(m,n)���и�ֵ
	vector<int> v4;
	v4.assign(4, 5);
	printVector(v4);

	//�Ƿ�Ϊ��
	if (v4.empty())
	{
		cout << "v4Ϊ��" << endl;
	}
	else
	{
		cout << "v4��Ϊ��" << endl;
		cout << "v4��������" << v4.capacity() << endl;
		cout << "v4�Ĵ�С��" << v4.size() << endl;
	}

	//����ָ����С,����������ԭ������Ĭ����0������䣬Ҳ�����Լ�ָ�������ڶ���������
	v4.resize(10,1);
	printVector(v4);
	//��ָ���Ĵ�СС��ԭ���ģ��򳬳��Ĳ��ֻᱻɾ��
	v4.resize(3);
	printVector(v4);
	cout << "-----------------------------------" << endl;
	vector<int> v5;
	
	//β��Ԫ��
	v5.push_back(10);
	v5.push_back(20);
	v5.push_back(30);
	v5.push_back(40);
	v5.push_back(50);
	printVector(v5);

	//βɾԪ��
	v5.pop_back();
	printVector(v5);

	//ʹ��insert(v,begin(),m)������insert(v,end(),m,n)������ʽ����
	v5.insert(v5.begin(), 100);
	printVector(v5);
	v5.insert(v5.begin(), 2, 100);
	printVector(v5);

	//ɾ��
	v5.erase(v5.begin());
	printVector(v5);

	v5.erase(v5.begin(),v5.begin()+2);//ɾ����begin��end֮���Ԫ�أ�������ɾ��������׼ȷ��˵Ӧ����end��ǰһ��
	printVector(v5);

	//���
	//��һ�֣�
	/*v5.erase(v5.begin(), v5.end());
	printVector(v5);
	if (v5.empty())
	{
		cout << "v5Ϊ��" << endl;
	}*/
	//�ڶ���
	v5.clear();
	printVector(v5);
	if (v5.empty())
	{
		cout << "v5Ϊ��" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}