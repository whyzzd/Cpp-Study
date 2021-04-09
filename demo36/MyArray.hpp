#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι���
	MyArray(int capacity)
	{
		//cout << "ִ���вι��캯��" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}
	//�������캯��
	MyArray(const MyArray& arr)
	{
		//cout << "ִ�п������캯��" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//������ͬһ�ռ����ͷŵ�����
		//this->pAddress = arr.pAddress;

		//���
		this->pAddress = new T[arr.m_Capacity];

		//��������
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "ִ��operator=" << endl;
		//���ж϶����Ƿ������ݣ�����������Ƚ����ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//�������
		this->pAddress = new T[arr.m_Capacity];
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void pushBack(const T&val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//βɾ��
	void popBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//operator[]����,T&������ֱ��ʹ�ö�����[]�������и�ֵ
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//��ȡsize
	int getSize()
	{
		return this->m_Size;
	}
	//��ȡcapacity
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//��������
	~MyArray()
	{
		//cout << "ִ����������" << endl;
		if (this->pAddress!= NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T *pAddress;
	int m_Size;
	int m_Capacity;
};