#include<iostream>
using namespace std;
#include<deque>
#include<string>
#include<algorithm>
#include<ctime>
//10个评委分别对5位选手进行打分
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
		cout << (*it).m_Name << "的得分是：" << (*it).m_Score << endl;
	}
}
void setScore(deque<Person> &d)
{
	//十位评委为选手打分

	
	for (deque<Person>::iterator it = d.begin(); it != d.end(); it++)
	{
		deque<int> ddd;
		int junScore = 0;
		for(int i=0;i<10;i++)
		{ 
			int sor = rand() % 41 + 60;
			ddd.push_back(sor);
		}
		//将每个人的得分进行排序，并去掉最高分和最低分
		sort(ddd.begin(), ddd.end());
		for (deque<int>::iterator it2 = ddd.begin(); it2 != ddd.end(); it2++)
		{
			cout << *it2 << " ";
		}
		cout << endl;
		//去掉一个最低分，去掉一个最高分
		ddd.pop_front();
		ddd.pop_back();
		//将最后的均分(ddd)放入选手中(d)
		for (deque<int>::iterator it3 = ddd.begin(); it3 != ddd.end(); it3++)
		{
			(*it).m_Score += *it3 ;
		}
		(*it).m_Score /= 8;
		
	}
		
	
	//输出得分,以下代码保留是由于学习遍历二维容器所用
	//达不到要求，无法从中去掉最高分和最低分
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
	//初始化选手，将对象放进数组当中
	for (int i = 0; i <5; i++)
	{
		string name = "选手";
		string nameSeed = "12345";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		d.push_back(p);
	}
	cout << "打分前：" << endl;
	printPerson(d);
	//评委为每个选手打分
	setScore(d);
	cout << "打分后：" << endl;
	printPerson(d);

}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;
}