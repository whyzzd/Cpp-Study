#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#define CEHUA 0
#define XINZHENG 1
#define JISHU 2
class Worker
{
public:
	Worker(string name,int salary)
	{
		this->m_Name = name;
		this->m_Salary = salary;
	}
	string m_Name;
	int m_Salary;
};
void creatWorker(vector<Worker> &v)
{
	for (int i=0;i<10;i++)
	{
		string w_Seed = "ABCDEFGHIJ";
		string name = "员工";
		name += w_Seed[i];
		int salary = rand() % 10000 + 10000;
		Worker w(name, salary);
		v.push_back(w);
	}
}

void setGroup(vector<Worker> &v,multimap<int, Worker> &m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int dep_Id = rand() % 3;
		m.insert(make_pair(dep_Id, *it));
	}
}

void showWorker(multimap<int, Worker> &m)
{
	//策划部门
	//注意：此处的count的结果还要进行减1，因为循环最后到0结束，一共三处
	int w_count = m.count(CEHUA)-1;
	cout << "策划部门：" << endl;
	for (multimap<int, Worker>::iterator it = m.find(CEHUA); it != m.end() &&w_count>=0 ; it++,w_count--)
	{
		cout << "姓名：" <<it->first<< it->second.m_Name << "薪资：" << it->second.m_Salary<<endl;
	}
	cout << "--------------------------------------" << endl;
	//行政部门

	cout << "行政部门：" << endl;
	w_count = m.count(XINZHENG)-1;
	for (multimap<int, Worker>::iterator it = m.find(XINZHENG); it != m.end() && w_count >= 0; it++, w_count--)
	{
		cout << "姓名：" << it->first << it->second.m_Name << "薪资：" << it->second.m_Salary << endl;
	}
	cout << "--------------------------------------" << endl;
	//技术部门

	cout << "技术部门：" << endl;
	w_count = m.count(JISHU)-1;
	for (multimap<int, Worker>::iterator it = m.find(JISHU); it != m.end() && w_count >= 0; it++, w_count--)
	{
		cout << "姓名：" << it->first << it->second.m_Name << "薪资：" << it->second.m_Salary << endl;
	}
}
void test01()
{
	//1.创建员工
	vector<Worker> v;
	creatWorker(v);

	//2.员工进行分组
	multimap<int, Worker>m;
	setGroup(v,m);
	/*for (multimap<int, Worker>::iterator it = m.begin(); it != m.end() ; it++)
	{
		cout << "姓名：" << it->first << it->second.m_Name << "薪资：" << it->second.m_Salary << endl;
	}*/

	//3.将各部门的员工按照部门打出来
	showWorker(m);
}
int main()
{
	test01();
	system("pause");
	return 0;
}