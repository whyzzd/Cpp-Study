#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造
	MyArray(int capacity)
	{
		//cout << "执行有参构造函数" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[capacity];
	}
	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		//cout << "执行拷贝构造函数" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//这会造成同一空间多次释放的问题
		//this->pAddress = arr.pAddress;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];

		//拷贝数据
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "执行operator=" << endl;
		//先判断堆区是否有数据，如果有数据先进行释放
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//进行深拷贝
		this->pAddress = new T[arr.m_Capacity];
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void pushBack(const T&val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//尾删法
	void popBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//operator[]重载,T&还可以直接使用对象名[]对它进行赋值
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//获取size
	int getSize()
	{
		return this->m_Size;
	}
	//获取capacity
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//析构函数
	~MyArray()
	{
		//cout << "执行析构函数" << endl;
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