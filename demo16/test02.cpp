#include<iostream>
using namespace std;
class Array
{
public:
	Array(){}
	Array(int n)
	{
		arr = new int[n];
		m_len = n;
	}
	Array(const Array &a)
	{
		this->m_len = a.m_len;
		arr = new int[this->m_len];
		for (int i = 0; i < this->m_len; i++)
		{
			this->arr[i] = a.arr[i];
		}
	}
	~Array()
	{
		if (this->arr != nullptr)
		{
			delete[]this->arr;
			this->arr = nullptr;
			m_len = -1;
		}
	}
	void setArr(int index, int val)
	{
		this->arr[index] = val;
	}
	int getArr(int index)
	{
		return this->arr[index];
	}
	Array& operator=(Array &a)
	{
		if (this->arr != nullptr)
		{
			delete[] a.arr;
			a.arr = nullptr;
		}
		//���ٿռ�
		this->arr = new int[a.m_len];
		this->m_len = a.m_len;
		for (int i = 0;i<this->m_len;i++)
		{
			this->setArr(i, a.arr[i]);
		}
		return *this;
	}
	int &operator[](int &i)
	{
		return this->arr[i];
	}
	bool operator==(Array &a)
	{
		if (this->m_len != a.m_len)
		{
			return false;
		}
		for (int i = 0; i < this->m_len; i++)
		{
			if (this->arr[i] != a[i])
			{
				return false;
			}
		}
		return true;
	}
	bool operator!=(Array &a)
	{
		return !(*this == a);
	}

protected:

private:
	friend void printArr( Array &a);
	int *arr;
	int m_len;
};
void printArr( Array &a)
{
	for (int i = 0; i < a.m_len; i++)
	{
		//cout << a.arr[i] << ",";
		cout << a[i]<<",";
	}
}
int main()
{
	Array a1(10);
	//����
	for (int i=0; i < 10; i++)
	{
		//a1.setArr(i, i+1);
		a1[i] = i + 1;
	}
	//���
	printArr(a1);
	cout << endl;

	//����=�������ʵ������
	Array a2, a3;
	a2 = a3 = a1;
	//a2.getArr();
	//a3.getArr();

	//����[]�����

	//ʵ��==�����
	
	cout << (a2 == a3 )<< endl;
	cout << (a2 != a3) << endl;
	system("pause");
	return 0;
}