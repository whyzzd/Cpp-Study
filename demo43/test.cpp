#include<iostream>
using namespace std;
#include<deque>
#include<string>
#include<algorithm>
#include<ctime>
//10����ί�ֱ��5λѡ�ֽ��д��
class Person
{
public:
	Person(string name ,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};
void printPerson(deque<Person> dd)
{
	for (deque<Person>::iterator it = dd.begin(); it != dd.end(); it++)
	{
		cout << (*it).m_Name << "�ĵ÷��ǣ�" << (*it).m_Score << endl;
	}
}
void setScore(deque<Person> &d)
{
	//ʮλ��ίΪѡ�ִ��

	
	for (deque<Person>::iterator it = d.begin(); it != d.end(); it++)
	{
		deque<int> ddd;
		int junScore = 0;
		for(int i=0;i<10;i++)
		{ 
			int sor = rand() % 41 + 60;
			ddd.push_back(sor);
		}
		//��ÿ���˵ĵ÷ֽ������򣬲�ȥ����߷ֺ���ͷ�
		sort(ddd.begin(), ddd.end());
		for (deque<int>::iterator it2 = ddd.begin(); it2 != ddd.end(); it2++)
		{
			cout << *it2 << " ";
		}
		cout << endl;
		//ȥ��һ����ͷ֣�ȥ��һ����߷�
		ddd.pop_front();
		ddd.pop_back();
		//�����ľ���(ddd)����ѡ����(d)
		for (deque<int>::iterator it3 = ddd.begin(); it3 != ddd.end(); it3++)
		{
			(*it).m_Score += *it3 ;
		}
		(*it).m_Score /= 8;
		
	}
		
	
	//����÷�,���´��뱣��������ѧϰ������ά��������
	//�ﲻ��Ҫ���޷�����ȥ����߷ֺ���ͷ�
	/*for (deque<deque<int>>::iterator it2 = dd.begin(); it2 != dd.end(); it2++)
	{
		for (deque<int>::iterator it3 = (*it2).begin(); it3 != (*it2).end(); it3++)
		{
			cout << *it3 << " ";
		}
		cout << endl;
	}*/
}
void test01()
{
	deque<Person> d;
	//��ʼ��ѡ�֣�������Ž����鵱��
	for (int i = 0; i <5; i++)
	{
		string name = "ѡ��";
		string nameSeed = "12345";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		d.push_back(p);
	}
	cout << "���ǰ��" << endl;
	printPerson(d);
	//��ίΪÿ��ѡ�ִ��
	setScore(d);
	cout << "��ֺ�" << endl;
	printPerson(d);

}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;
}