#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
}
//�������һ�ֹ���
class GreaterFour
{
public:
	bool operator()(int val)
	{
		return val > 40;
	}
};

//�����������
class MyCompare 
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};

//����ȫ�ֺ���ָ������
bool myCompare(int val1, int val2)
{
	return val1 > val2;
}
//һԪν��
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	//printVector(v);
	//һԪν�ʵ�ʹ��,ν�ʵ���˼��ָ�º����еķ���ֵ��bool�͵ģ�һԪ��ָ����ֻ��һ��
	//�ҳ��������д���40����
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFour());//�����greatFour��������������
	if(it!=v.end())
	{ 
		cout << *it << endl;
	}
	else
	{
		cout << "δ�ҵ�����40����" << endl;
	}
	
}

//��Ԫν��
void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	//Ĭ�ϵ�����
	sort(v.begin(), v.end());
	printVector(v);

	//���÷º������е�������
	/*MyCompare mc;
	sort(v.begin(), v.end(), mc);*///Ҳ����ʹ����������������Ϊ����


	//����ȫ�ֺ���ָ������
	sort(v.begin(), v.end(), myCompare);
	cout << "-------------------------" << endl;
	printVector(v);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}