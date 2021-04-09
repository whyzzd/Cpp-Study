#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " " ;
	}
};
void test01()
{
	vector<int>v;
	for (int i = 1; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), MyPrint());
	cout << "------------------------------" << endl;
	//利用洗牌算法打乱顺序
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), MyPrint());
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;
}