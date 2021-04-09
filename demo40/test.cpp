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

	//利用赋值号=进行赋值
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//利用assign(begin,end)进行赋值
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);

	//利用assign(m,n)进行赋值
	vector<int> v4;
	v4.assign(4, 5);
	printVector(v4);

	//是否为空
	if (v4.empty())
	{
		cout << "v4为空" << endl;
	}
	else
	{
		cout << "v4不为空" << endl;
		cout << "v4的容量：" << v4.capacity() << endl;
		cout << "v4的大小：" << v4.size() << endl;
	}

	//重新指定大小,若容量大于原来的则默认以0进行填充，也可以自己指定（即第二个参数）
	v4.resize(10,1);
	printVector(v4);
	//若指定的大小小于原来的，则超出的部分会被删除
	v4.resize(3);
	printVector(v4);
	cout << "-----------------------------------" << endl;
	vector<int> v5;
	
	//尾插元素
	v5.push_back(10);
	v5.push_back(20);
	v5.push_back(30);
	v5.push_back(40);
	v5.push_back(50);
	printVector(v5);

	//尾删元素
	v5.pop_back();
	printVector(v5);

	//使用insert(v,begin(),m)，或者insert(v,end(),m,n)这种形式插入
	v5.insert(v5.begin(), 100);
	printVector(v5);
	v5.insert(v5.begin(), 2, 100);
	printVector(v5);

	//删除
	v5.erase(v5.begin());
	printVector(v5);

	v5.erase(v5.begin(),v5.begin()+2);//删除从begin到end之间的元素，此例中删除两个，准确来说应该是end的前一个
	printVector(v5);

	//清空
	//第一种：
	/*v5.erase(v5.begin(), v5.end());
	printVector(v5);
	if (v5.empty())
	{
		cout << "v5为空" << endl;
	}*/
	//第二种
	v5.clear();
	printVector(v5);
	if (v5.empty())
	{
		cout << "v5为空" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}