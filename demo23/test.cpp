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
//������ģ����������ָ��ָ������Ķ��󣬸�������ǳ�����
class Computer//�����࣬����ʵ�ֲ�������װ
{
public:
	//���캯������������Ķ���
	Computer(CPU *cpu,VideoCard *vc,Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void ComputerWork()
	{
		//�ڻ�����д�ó��󷽷��������ʵ�ֽ��ɸ�������ȥʵ��
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
		cout << "intelCPU��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "intelCPU��ʼ������" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intelCPU��ʼ������" << endl;
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