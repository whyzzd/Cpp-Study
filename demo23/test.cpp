#include<iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
//代码核心，创建父类的指针指向子类的对象，父类可以是抽象类
class Computer//电脑类，用来实现部件的组装
{
public:
	//构造函数，传入子类的对象
	Computer(CPU *cpu,VideoCard *vc,Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void ComputerWork()
	{
		//在基类中写好抽象方法，具体的实现交由各个子类去实现
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;
};

class IntelCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout << "intelCPU开始工作了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "intelCPU开始工作了" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intelCPU开始工作了" << endl;
	}
};

void test01()
{
	CPU *c = new IntelCPU;
	VideoCard *vc = new IntelVideoCard;
	Memory *mem = new IntelMemory;
	Computer *com = new Computer(c, vc, mem);
	com->ComputerWork();
	delete com;
}
int main()
{
	test01();
	system("pause");
	return 0;
}